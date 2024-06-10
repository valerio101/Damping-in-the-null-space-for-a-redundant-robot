% Builds the matrix A_i-1_i based on the DH convention given the DH table
% params
function [dhMat] = dh_mat_from_table(a, alpha, d, theta)
dhMat = [
    cos(theta) -cos(alpha)*sin(theta) sin(alpha)*sin(theta) a*cos(theta);
    sin(theta) cos(alpha)*cos(theta) -sin(alpha)*cos(theta) a*sin(theta);
    0 sin(alpha) cos(alpha) d;
    0 0 0 1
    ];
end