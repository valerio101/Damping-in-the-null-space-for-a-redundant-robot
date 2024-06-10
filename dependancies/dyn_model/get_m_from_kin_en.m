function [M] = get_m_from_kin_en(kinEn, joint_vel)
%GET_M_FROM_KIN_EN Returns the M(q) matrix (robot inertia matrix) derived
%   from the given expression of the kinetic energy
%   kinEn: The kinetic energy expression from which the M matrix will be
%   extracted.
%   joint_vel: The vector of joint velocities (e.g. [q1_dot; q2_dot]).

% V. 1 
% H = hessian(kinEn, joint_vel);
% % Extract the upper triangular part of the Hessian matrix
% upper_triangular = triu(H);
% % Create the mass matrix M from the upper triangular part
% M = upper_triangular + upper_triangular.' - diag(diag(upper_triangular));
    s = size(joint_vel,1);
    M = sym(zeros(s));
    for i=1:s
        for j=i:s
            if i == j
                M(i,j) = diff(kinEn, joint_vel(i),2);
            else
                temp = diff(kinEn, joint_vel(i));
                M(i,j) = diff(temp, joint_vel(j));
                M(j,i) = M(i,j); % symmetry
            end
        end
    end
end