function [M, c, g_q] = get_dyn_terms()
%GET_DYN_TERMS Computes the dynamic terms (matrix M(q), c(q, q_dot), g(q))
% of the KUKA LBR 4+.
% Gravitational acceleration
g0 = 9.8;

% Define the symbolic variables of joint's position and velocity to compute the
num_joints = 7;
joints_pos = sym('q', [1 num_joints], 'real');
joints_vel = sym('q_dot', [1 num_joints], 'real');

% Initialize the cell of the CoM vectors (wrt RF_i)
% Initialize the cell of Inertia matrices of links
inertiaMatrices = cell(num_joints, 1);
centersOfMass_rfi = sym(zeros(3, num_joints));
for i=1:num_joints
    centersOfMass_rfi(1:3, i) = sym(sprintf('r%d_', i), [1 3], 'real')';
    inertiaMatrices{i} = generate_symb_inertia_mat(sprintf('I%d_', i), 3);
end
masses = sym('m', [1 num_joints], 'real');

% The DH table associated to Kuka LBR4+
d1 = 0.4;  % meters, according to paper
d2 = 0.39;  % meters, according to paper
kuka_lbr_4p_dh_table = [ % a, alpha, d, theta
        [0, sym(pi)/2,  0,  joints_pos(1)];
        [0, -sym(pi)/2,  0,  joints_pos(2)];
        [0, -sym(pi)/2,  d1,  joints_pos(3)];
        [0, sym(pi)/2,  0,  joints_pos(4)];
        [0, sym(pi)/2,  d2,  joints_pos(5)];
        [0, -sym(pi)/2,  0,  joints_pos(6)];
        [0, 0,  0,  joints_pos(7)];
    ];

% % Compute the kinetic energy T
kinEn = compute_kin_en(kuka_lbr_4p_dh_table, centersOfMass_rfi, masses, inertiaMatrices, num2cell(joints_vel));
kinEn = simplify(kinEn);

% Get the symbolic expression of M and c from T
M = simplify(get_m_from_kin_en(kinEn, joints_vel));
c = simplify(get_coriolis_mat_from_m(M, joints_pos, joints_vel));

% Compute the DH matrices from RF0 to RF_i
dh_mats = cell(num_joints, 1);
for i=1:num_joints
    if i == 1
        A0i = eye(4);
    else
        A0i = dh_mats{i-1};
    end
    dh_mats{i} = A0i * dh_mat_from_table(kuka_lbr_4p_dh_table(i, 1), kuka_lbr_4p_dh_table(i, 2), kuka_lbr_4p_dh_table(i, 3), kuka_lbr_4p_dh_table(i, 4));
end

% Compute the potential energy U
U = 0;
g = [0; -g0; 0]';
for i=1:num_joints
    com_i_r0 = dh_mats{i} * [centersOfMass_rfi(1:3, i); 1];
    U_i = -masses(i) * g * com_i_r0(1:3);
    U = U + U_i;
end

% Get the symbolic expression of g
g_q = simplify(jacobian(U, joints_pos))';
end

