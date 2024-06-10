function [corMat] = get_coriolis_mat_from_chris(chris_mat, q_dot)
%GET_CORIOLIS_MAT_FROM_M Returns the matrix of the coriolis and centrifugal terms from the given
%  matrices of Christoffel symbols.
%   chris_mat: The (cell array of) matrices of the Christoffel symbols.
%   q_dot: The vector of joint velocities (q_dot = [q_i_dot]).
    n = size(chris_mat, 1);

    corMat = sym(zeros(n, 1));
    for i = 1:n
        corMat(i) = q_dot' * chris_mat{i} * q_dot;
    end
end

