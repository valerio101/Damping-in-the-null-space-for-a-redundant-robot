function [totKinEn] = compute_kin_en(dhTable, centersOfMass, masses, ...
    inertiaMatrices, joint_dot_vars)
%COMPUTE_KIN_EN Compute the total kinetic energy for the model associated
% with the given DH table.
%   dhTable: The DH table associated to the robot, in the form
% [[row_link1: a, alpha, d, theta], [...], ...]
%   centersOfMass: The list of vectors containing at position i the 
% vector of the position of the CoM of link i wrt Oi. (dim = 3 x num_links)
%   masses: The list of scalars that at position i contains the mass of
% link i. (dim = 1 x num_links)
%   inertiaMatrices: The cell array that at position i contains the inertia
% matrix of link i. (dim = num_links x 3 x 3)
%   joint_dot_vars: The cell array that at position i contains the
% derivative (wrt time) of the ith joint's variable. (i.e. [qi_dot]) (dim= 1 x num_links)
%
%   EXAMPLE USAGE:
%   dh_table = [[l1, 0, 0, q1]; [l2, 0, 0, q2]];
%   masses = [m1, m2];
%   centersOfMass = [[-l1+d1; 0; 0], [-l2+d2; 0; 0]];
%   inertiaMatrices = cell(2, 1);
%   inertiaMatrices{1} = diag([i1xx, i1yy, i1zz]);
%   inertiaMatrices{2} = generate_symb_inertia_mat('I2', 3);;
%   joint_dot_vars = {q1_dot, q2_dot};
%   
%   kinEn = compute_kin_en(dh_table, centersOfMass, masses, inertiaMatrices, joint_dot_vars);

% prismatic_joint = 1;
% revolute_joint = 0;
% 
num_links = size(dhTable, 1);
% 
% % Detect the link type for each row of the dh table and get the joint
% % variable and the associated derivative.
% joint_types = zeros(1, num_links);
% % joint_vars = cell(num_links, 1);
% for i = 1:num_links
%     link_row = dhTable(i, :);
%     % If the name of the theta variable in the dhTable is 'qi', consider
%     % the associated link as revolute. Otherwise it is prismatic.
%     theta_var_name = char(link_row(end));
%     joint_type = prismatic_joint;
%     if theta_var_name(1) == 'q'
%         joint_type = revolute_joint;
%         % joint_vars{i} = link_row(end);
%     else
%         % joint_vars{i} = link_row(end-1);
%     end
%     joint_types(i) = joint_type;
% end
joint_types = get_joint_types(dhTable);

% Compute the DH matrix for each link
dh_matrices = cell(1, num_links);
for i = 1:num_links
    dh_matrices{i} = dh_mat_from_table(dhTable(i, 1), dhTable(i, 2), dhTable(i, 3), dhTable(i, 4));
end


% Compute the total kin. en. as the sum of the kin. en. of each link
% totKinEn = zeros(length(joint_types));
totKinEn = 0;
omegas = cell(num_links, 1); % list of omega_i_i
v_s = cell(num_links, 1); % list of v_i_i
for i = 1:num_links
    % Get omega_i-1_i-1 and v_i-1_i-1
    if i==1
        prev_omega = [0;0;0];
        prev_v = [0;0;0];
    else
        prev_omega = omegas{i-1};
        prev_v = v_s{i-1};
    end

    % Get the rotation matrix from RFi to RFi-1
    rot_i_im1 = dh_matrices{i}(1:3, 1:3)';
    
    % Compute the angular velocity of this link wrt to RF_i
    omega_i_i = rot_i_im1 * (prev_omega + ...
        (1 - joint_types(i))* joint_dot_vars{i}(1)* [0;0;1] ...
        );
    omegas{i} = omega_i_i;

    % Compute the translational velocity of this link wrt RF_i
    v_i_i = rot_i_im1 * (prev_v + ...
        joint_types(i) * joint_dot_vars{i}(1)* [0;0;1]) + ...
        cross(omega_i_i, rot_i_im1*dh_matrices{i}(1:3, 4));
    v_s{i} = v_i_i;

    % Compute the velocity of the CoM of link i
    vc_i = v_i_i + cross(omega_i_i, centersOfMass(1:3, i));

    % Compute the kin en for the current link and sum it to the total
    % energy.
    kinEn_i = (1/2) * masses(i) * (vc_i'*vc_i) + ...
        (1/2) * omega_i_i' * inertiaMatrices(i) * omega_i_i;

    % disp(kinEn_i);
    totKinEn = totKinEn + kinEn_i;
end
end

