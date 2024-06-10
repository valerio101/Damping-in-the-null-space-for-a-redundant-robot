function [cMat] = get_chris_mat_from_m(robot_in_mat, q)
%GET_CHRIS_MAT_FROM_M Returns the matrices of the Christoffel symbols computed from the given Robot Inertia Matrix.
%   robot_in_mat: The Robot Inertia Matrix from which to compute the Coriolis Matrix
%   q: The vector of the q_i symbolic variables of the robot.
    num_links = size(robot_in_mat, 1);

    % Compute the C_i matrix for each link and store it in cMat
    cMat = cell(num_links, 1);
    for i = 1:num_links
        % Compute the derivative of the Kth column of M wrt q
        Mk_q = jacobian(robot_in_mat(:, i), q);
        % Compute the derivative of M wrt q_k
        M_qk = diff(robot_in_mat, q(i));
        % Compute C_i
        C_k = 0.5 * (Mk_q + Mk_q' - M_qk);
        cMat{i} = C_k;
    end
end

