function [corMat] = get_coriolis_mat_from_m(robot_in_mat, q, q_dot)
%GET_CORIOLIS_MAT_FROM_M Returns the matrix of the coriolis and centrifugal terms from the given
%  matrices of Christoffel symbols.
%   robot_in_mat: The Robot Inertia Matrix from which to compute the Coriolis Matrix
%   q: The vector of the q_i symbolic variables of the robot.
%   q_dot: The vector of joint velocities (q_dot = [q_i_dot]).
    chris_mat = get_chris_mat_from_m(robot_in_mat, q);
    n = size(chris_mat, 1);

    corMat = sym(zeros(n, 1));
    for i = 1:n
        corMat(i) = q_dot' * chris_mat{i} * q_dot;
    end
end

