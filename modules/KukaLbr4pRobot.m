classdef KukaLbr4pRobot
    %% KukaLbr4pRobot: A class that defines all the parameters and methods related to the functioning of
    %  a KUKA LBR 4+ robot.
    properties
        num_joints = 7;
        % Gravitational acceleration
        g0 = 9.8;
        % d_i params of the DH table
        d1 = 0.4;  % meters, according to paper
        d2 = 0.39;  % meters, according to paper

        joints_pos;
        joints_vel;
        inertiaMatrices;
        centersOfMass_rfi;
        masses;
        kuka_lbr_4p_dh_table;
           
        % The Jacobian of f(q) w.r.t q
        j;
        % The derivate of the Jacobian w.r.t time
        j_dot;
        % The robot inertia matrix
        M;
        % The matrix of coriolis and centrifugal acceleration terms
        c;
        % The gravity vector
        g;
        % The numerical form of the dynamic terms
        M_num;
        c_num;
        g_num;

        % The DH homogeneus matrix from RF0 to RF_ee (RF on the e.e.)
        A0e;
    end

    methods
        function obj = KukaLbr4pRobot()
            % Define the symbolic variables of joint's position and velocity to compute the
            obj.joints_pos = sym('q', [obj.num_joints 1], 'real');
            obj.joints_vel = sym('q_dot', [obj.num_joints 1], 'real');
            
            % Initialize the cell of the CoM vectors (wrt RF_i)
            % Initialize the cell of Inertia matrices of links
            obj.inertiaMatrices = cell(obj.num_joints, 1);
            obj.centersOfMass_rfi = sym(zeros(3, obj.num_joints));
            for i=1:obj.num_joints
                obj.centersOfMass_rfi(1:3, i) = sym(sprintf('r%d_', i), [1 3], 'real')';
                obj.inertiaMatrices{i} = generate_symb_inertia_mat(sprintf('I%d_', i), 3);
            end
            obj.masses = sym('m', [1 obj.num_joints], 'real');

            % The DH table associated to Kuka LBR4+
            obj.kuka_lbr_4p_dh_table = [ % a, alpha, d, theta
                    [0, sym(pi)/2,  0,  obj.joints_pos(1)];
                    [0, -sym(pi)/2,  0,  obj.joints_pos(2)];
                    [0, -sym(pi)/2,  obj.d1,  obj.joints_pos(3)];
                    [0, sym(pi)/2,  0,  obj.joints_pos(4)];
                    [0, sym(pi)/2,  obj.d2,  obj.joints_pos(5)];
                    [0, -sym(pi)/2,  0,  obj.joints_pos(6)];
                    [0, 0,  0,  obj.joints_pos(7)];
            ];
        end

        function [obj, f_q] = compute_direct_kinematics(obj, curr_joint_pos)
            % compute_direct_kinematics: Returns the position and orientation of the e.e. wrt RF0.
            % If curr_joint_pos is given, the position and orientation of the e.e. are computed
            % in the given configuration.
            if isempty(obj.A0e)
                % Compute A0e if not computed yet
                A0e = eye(4);
                for i=1:obj.num_joints
                    A0e = A0e * dh_mat_from_table( ...
                        obj.kuka_lbr_4p_dh_table(i, 1), ...
                        obj.kuka_lbr_4p_dh_table(i, 2), ...
                        obj.kuka_lbr_4p_dh_table(i, 3), ...
                        obj.kuka_lbr_4p_dh_table(i, 4));
                end

                obj.A0e = A0e;
            end

            if exist('curr_joint_pos','var')
                % Compute f(q) in the current configuration
                f_q = subs(obj.A0e, obj.joints_pos, curr_joint_pos);
            else
                f_q = obj.A0e;
            end
        end

        function [obj, j] = get_jacobian(obj, curr_joint_pos)
            % get_jacobian: Returns the Jacobian of f(q) (the e.e. position) w.r.t. q.
            % If curr_joint_pos is given, the Jacobian is computed in the given configuration.
            if isempty(obj.j)
                [~, A0e] = obj.compute_direct_kinematics();
                j = jacobian(A0e(1:3, 4), obj.joints_pos);
                obj.j = j;
            end

            if exist('curr_joint_pos','var')
                % Compute the Jacobian in the current configuration
                j = subs(obj.j, obj.joints_pos, curr_joint_pos);
            else
                j = obj.j;
            end
        end

        function [obj, J_dot] = get_j_dot(obj, curr_joint_pos, curr_joint_vel)
            % get_j_dot: Returns J_dot(q), the derivative wrt time of J(q).
            % If curr_joint_pos and curr_joint_vel are given, J_dot is computed in the given configuration.

            if isempty(obj.j_dot)
                % Compute J_dot as it has not been computed yet
                [~, j] = obj.get_jacobian();
                
                % Replace q_i vars with time-dependant vars
                t = sym('t', 'real');
                temp_vars = sym(zeros(obj.num_joints, 1));
                for i=1:obj.num_joints
                    temp_vars(i) = str2sym("q" + int2str(i) + "_temp(t)");
                end
                
                % Differentiate J wrt time (t)
                j = subs(j, obj.joints_pos, temp_vars);
                j_dot = diff(j, t);

                % Replace the temporal vars with the original ones
                j_dot = subs(j_dot, diff(temp_vars), obj.joints_vel);
                j_dot = subs(j_dot, temp_vars, obj.joints_pos);

                obj.j_dot = j_dot;
            end

            if exist('curr_joint_pos','var') && exist('curr_joint_vel','var')
                % Compute the Jacobian in the current configuration
                j_dot = subs(obj.j_dot, obj.joints_pos, curr_joint_pos);
                j_dot = subs(j_dot, obj.joints_vel, curr_joint_vel);
            else
                j_dot = obj.j_dot;
            end
        end

        function [obj, M, c, g_q] = get_dyn_terms(obj, compute)
            %GET_DYN_TERMS Computes the dynamic terms (matrix M(q),
            % c(q, q_dot), g(q)) of the KUKA LBR 4+ in symbolic form.
            % compute: Optional parameter (=False). If set to true, when the dyn terms have not been computed yet,
            % they are computed from the kinetic energy expression. Otherwise they are loaded from memory.

            if ~isempty(obj.M) && ~isempty(obj.c) && ~isempty(obj.g)
                M = obj.M;
                c = obj.c;
                g_q = obj.g;
                return
            elseif ~exist('compute','var') || compute == 0
                M = load("./resources/kuka_lbr4p_m.mat").M;
                obj.M = M;

                c = load("./resources/kuka_lbr4p_c.mat").c;
                obj.c = c;

                g_q = load("./resources/kuka_lbr4p_g.mat").g_q;
                obj.g = g_q;
                return
            end

            % Compute the kinetic energy T
            kinEn = compute_kin_en(obj.kuka_lbr_4p_dh_table, ...
                obj.centersOfMass_rfi, obj.masses, obj.inertiaMatrices, ...
                num2cell(obj.joints_vel));
            
            % Get the symbolic expression of M and c from T
            M = get_m_from_kin_en(kinEn, obj.joints_vel);
            obj.M = M;
            c = get_coriolis_mat_from_m(M, obj.joints_pos, obj.joints_vel);
            obj.c = c;
            
            % Compute the DH matrices from RF0 to RF_i
            dh_mats = cell(obj.num_joints, 1);
            for i=1:obj.num_joints
                if i == 1
                    A0i = eye(4);
                else
                    A0i = dh_mats{i-1};
                end
                dh_mats{i} = A0i * dh_mat_from_table( ...
                    obj.kuka_lbr_4p_dh_table(i, 1), ...
                    obj.kuka_lbr_4p_dh_table(i, 2), ...
                    obj.kuka_lbr_4p_dh_table(i, 3), ...
                    obj.kuka_lbr_4p_dh_table(i, 4));
            end
            
            % Compute the potential energy U
            U = 0;
            g = [0; -obj.g0; 0]';
            for i=1:obj.num_joints
                com_i_r0 = dh_mats{i} * [obj.centersOfMass_rfi(1:3, i); 1];
                U_i = -obj.masses(i) * g * com_i_r0(1:3);
                U = U + U_i;
            end
            
            % Get the symbolic expression of g
            g_q = simplify(jacobian(U, obj.joints_pos))';
            obj.g = g_q;
        end  

        function [obj, M_num, c_num, g_num] = get_numerical_dyn_terms(obj)
        % get_numerical_dyn_terms: Returns the numerical form of the
        % dynamic terms (M, c, g) with dependancy only on q and q_dot.
            if ~isempty(obj.M) && ~isempty(obj.c) && ~isempty(obj.g)
                M = obj.M;
                c = obj.c;
                g_q = obj.g;
                return
            end

            [~, M, c, g] = obj.get_dyn_terms();

            vals = load('./resources/paper_vals.mat').d;

            % Get the numerical values of the masses
            num_masses = zeros(1, obj.num_joints);
            for i=1:obj.num_joints
                mass_key = strcat("m", int2str(i));
                num_masses(i) = vals(mass_key);
            end
            % Get the numerical values of the masses
            num_com_rfi = zeros(3, obj.num_joints);
            for i=1:obj.num_joints
                c_i_x = strcat("c", int2str(i), ',1');
                c_i_y = strcat("c", int2str(i), ',2');
                c_i_z = strcat("c", int2str(i), ',3');
                num_com_rfi(1:3, i) = [vals(c_i_x); vals(c_i_y); vals(c_i_z)];
            end
            % Get the numerical values of the inertia matrix
            num_inertia_mat = cell(obj.num_joints, 1);
            for i=1:obj.num_joints
                I_i_xx = strcat("I", int2str(i), ',1_1');
                I_i_xy = strcat("I", int2str(i), ',1_2');
                I_i_xz = strcat("I", int2str(i), ',1_3');
                I_i_yy = strcat("I", int2str(i), ',2_2');
                I_i_yz = strcat("I", int2str(i), ',2_3');
                I_i_zz = strcat("I", int2str(i), ',3_3');
                num_inertia_mat{i} = [
                    [vals(I_i_xx), vals(I_i_xy), vals(I_i_xz)];
                    [vals(I_i_xy), vals(I_i_yy), vals(I_i_yz)];
                    [vals(I_i_xz), vals(I_i_yz), vals(I_i_zz)]
                ];
            end
            

            % Replace the symbolic vars with the associated numerical vals
            M_num = subs(M, obj.masses, num_masses);
            M_num = subs(M_num, obj.centersOfMass_rfi, num_com_rfi);
            for i=1:obj.num_joints
                M_num = subs(M_num, obj.inertiaMatrices{i}, num_inertia_mat{i});
            end
            obj.M_num = M_num;

            c_num = subs(c, obj.masses, num_masses);
            c_num = subs(c_num, obj.centersOfMass_rfi, num_com_rfi);
            for i=1:obj.num_joints
                c_num = subs(c_num, obj.inertiaMatrices{i}, num_inertia_mat{i});
            end
            obj.c_num = c_num;

            g_num = subs(g, obj.masses, num_masses);
            g_num = subs(g_num, obj.centersOfMass_rfi, num_com_rfi);
            for i=1:obj.num_joints
                g_num = subs(g_num, obj.inertiaMatrices{i}, num_inertia_mat{i});
            end
            obj.g_num = g_num;
        end
    end
end