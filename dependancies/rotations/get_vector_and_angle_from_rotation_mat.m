% Given a matrix, checks whether it is orthonormal, det == 1 and 
% returns the vector and angle that the rotation represented by the matrix
% is made about.
function [r,theta] = get_vector_and_angle_from_rotation_mat(mat)
    % ensure det = 1
    assert(int32(det(mat)) == 1.0);
    % ensure orthonormal
    assert(isequal(int32(mat*mat'), eye(3)));

    % Calculate theta and r
    tr = trace(mat);
    c_t = (tr - 1)/2;
    s_t = (1/2) * sqrt( (mat(1, 2) - mat(2, 1))^2 + (mat(1, 3) - mat(3, 1))^2 + (mat(2, 3) - mat(3, 2))^2 );
    theta = atan2(s_t, c_t);
    
    assert(not(s_t == 0))
    r = (1/(2 * s_t)) * [mat(3,2)-mat(2, 3); mat(1, 3)-mat(3,1); mat(2, 1)-mat(1, 2)];
end

