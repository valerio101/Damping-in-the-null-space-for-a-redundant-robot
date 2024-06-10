function [m_dot] = compute_m_dot(M, q, q_dot)
%COMPUTE_M_DOT Computes the derivative of the given robot inertia matrix
%wrt time
%   M: The robot inertia matrix.
%   q: The vector of the q_i variables.
%   q_dot: The vector of the q_dot_i variables.
num_links = size(q, 1);
m_dot = sym(zeros(num_links));
for k = 1:num_links
    for j = 1:num_links
        acc = 0;
        for i = 1:num_links
            acc = acc +  diff(M(k,j), q(i)) * q_dot(i);
        end
        m_dot(k,j) = acc;
    end
end
end

