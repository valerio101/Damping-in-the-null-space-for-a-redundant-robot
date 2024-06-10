function [outputArg1,outputArg2] = get_ne_dyn_mod(q_dot, q_ddot, vecCOMs, g0, dhTable, eeDhMat, masses, inertiaMats)
%GET_NE_DYN_MOD Compute the dynamic model of the robot associated with the given parameters using the
%  Netwon-Euler formulation.
%   q_dot: The cell array that at position i contains the
% derivative (wrt time) of the ith joint's variable. (i.e. [qi_dot]) (dim= 1 x num_links)
%   q_ddot: The cell array that at position i contains the second
% derivative (wrt time) of the ith joint's variable. (i.e. [qi_ddot]) (dim= 1 x num_links)
%   vecCOMs: The array of vectors r_i_Ci_i, that expresses the position of the CoM_i from O_i wrt RFi,
% in the form of a 3xnum_links matrix (e.g. [r_1_C1_1, ...]).
%   g0: The gravity acceleration. (scalar)
%   dhTable: The DH table associated to the robot, in the form
% [[row_link1: a, alpha, d, theta], [...], ...]
%   eeDhMat: The DH matrix from the last RF to the e.e. RF.
%   masses: The list of scalars that at position i contains the mass of
% link i. (dim = 1 x num_links)
%   inertiaMats: The cell array that at position i contains the inertia
% matrix of link i. (dim = num_links x 3 x 3)

% Get the type of each joint
joint_types = get_joint_types(dhTable);

% Compute the DH matrix for each link
dh_matrices = cell(1, num_links);
for i = 1:num_links
    dh_matrices{i} = dh_mat_from_table(dhTable(i, 1), dhTable(i, 2), dhTable(i, 3), dhTable(i, 4));
end

% Forward step
z0 = [0; 0; 1];
omegas = cell(num_links, 1); % list of omega_i_i
omegas_dot = cell(num_links, 1); % list of omega_dot_i_i
p_ddot_s = cell(num_links, 1); % list of p_ddot_i_i
p_ddot_ci_s = cell(num_links, 1); % list of p_ddot_Ci_i
omega_mi_im1_s = cell(num_links, 1); % list of omega_mi_im1
for i = 1:num_links
    % Get the previous values (i-1)
    if i==1
        prev_omega = [0;0;0];
        prev_omega_dot = [0;0;0];
        prev_p_ddot = [0;g0;0]; % = p_ddot_0_0 - g_0_0
        prev_p_ddot_ci = [0;0;0];
    else
        prev_omega = omegas{i-1};
        prev_omega_dot = omegas_dot{i-1};
        prev_p_ddot = p_ddot_s{i-1};
        prev_p_ddot_ci = p_ddot_ci_s{i-1};
    end

    k_ri = 1; % TODO: define this parameter
    z_mi_im1 = 1; % TODO: define this parameter
    r_im1_i_t = dh_matrices{i}(1:3, 1:3)';
    r_im1_i = dh_matrices{i}(1:3, 4);
    if joint_types(i) == 1
        % this is a prismatic joint
        omega_i_i = r_im1_i_t * prev_omega;
        omega_dot_i_i = r_im1_i_t * prev_omega_dot;
        p_ddot_i_i = r_im1_i_t * (prev_p_ddot + q_ddot(i)*z0) + ...
            cross(2*q_dot(i)*omega_i_i, r_im1_i_t*z0) + ...
            cross(omega_dot_i_i, r_im1_i) + ...
            cross(omega_i_i, cross(omega_i_i, r_im1_i));
    else
        % this is a revolute joint
        omega_i_i = r_im1_i_t * (prev_omega + q_dot(i)*z0);
        omega_dot_i_i = r_im1_i_t * (prev_omega_dot + q_ddot(i)*z0 + ...
            cross(q_dot(i)*prev_omega, z0));
        p_ddot_i_i = r_im1_i_t * prev_p_ddot + cross(omega_dot_i_i, r_im1_i) + ...
            cross(omega_i_i, cross(omega_i_i, r_im1_i));
    end
    p_ddot_ci_i = p_ddot_i_i + cross(omega_dot_i_i, vecCOMs(i)) + ...
        cross(omega_i_i, cross(omega_i_i, vecCOMs(i)));
    omega_mi_im1 = prev_omega_dot + k_ri * q_ddot(i) * z_mi_im1 + ...
        cross(k_ri * q_dot(i) * omega_i_i, z_mi_im1);

    omegas{i} = omega_i_i;
    omegas_dot{i} = omega_dot_i_i;
    p_ddot_s{i} = p_ddot_i_i;
    p_ddot_ci_s{i} = p_ddot_ci_i;
    omega_mi_im1_s{i} = omega_mi_im1;
end

% Backward step
f_s = cell(num_links, 1); % list of f_i_i
mi_s = cell(num_links, 1); % list of mi_i_i
for i = num_links:-1
    % Get the next values (i+1)
    if i==num_links
        next_f = [0;0;0];
        next_mi = [0;0;0];
        r_i_ip1 = eeDhMat;
    else
        next_f = f_s{i+1};
        next_mi = mi_s{i+1};
        r_i_ip1 = dh_matrices{i+1}(1:3, 1:3);
    end

    k_rip1 = 1; % TODO: to define
    I_mip1 = 1; % TODO: to define
    z_mip1_i = 1; % TODO: define this parameter
     
    f_i_i = r_i_ip1 * next_f + masses(i)*p_ddot_ci_s(i);
    m_i_i = -cross(f_i_i, dh_matrices{i}(1:3, 4) + vecCOMs(i)) + ...
        r_i_ip1 * next_mi + r_i_ip1 * cross(next_f, vecCOMs(i)) + ...
        inertiaMats(i)*omega_dot_i_i + cross(omega_i_i, inertiaMats(i) * omega_i_i) + ...
        k_rip1*q_ddot(i+1)*I_mip1*z_mip1_i + k_rip1*q_dot(i+1)*I_mip1*cross(omega_i_i, z_mip1_i);

    f_s{i} = f_i_i;
    mi_s{i} = m_i_i;
end

% Compute tau
taus = cell(num_links, 1); % list of tau_i
for i = 1:num_links
    if joint_types(i) == 1
        % this is a prismatic joint
        first_addend = f_s{i}'
    else
        % this is a revolute joint
        first_addend = mi_s{i}';
    
    taus{i} = first_addend*dh_matrices{i}(1:3, 1:3)'*z0 + ...
        k_ri * I_mi * omega_mi_im1(i)'*z_mi_im1;
        % + non-cons forces (F_vi*q_dot(i) + F_si+sign(q_dot(i)))
end
end