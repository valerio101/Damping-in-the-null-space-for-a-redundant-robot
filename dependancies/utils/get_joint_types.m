function [joint_types] = get_joint_types(dhTable)
%GET_JOINT_TYPES Returns a row vector that at column i is 0 if the i_th 
% joint is revolute or 1 if it is prismatic.
%   dhTable: The DH table associated to the robot, in the form
% [[row_link1: a, alpha, d, theta], [...], ...]
prismatic_joint = 1;
revolute_joint = 0;

num_links = size(dhTable, 1);

% Detect the link type for each row of the dh table and get the joint
% variable and the associated derivative.
joint_types = zeros(1, num_links);
% joint_vars = cell(num_links, 1);
for i = 1:num_links
    link_row = dhTable(i, :);
    % If the name of the theta variable in the dhTable is 'qi', consider
    % the associated link as revolute. Otherwise it is prismatic.
    theta_var_name = char(link_row(end));
    joint_type = prismatic_joint;
    if theta_var_name(1) == 'q'
        joint_type = revolute_joint;
        % joint_vars{i} = link_row(end);
    else
        % joint_vars{i} = link_row(end-1);
    end
    joint_types(i) = joint_type;
end
end

