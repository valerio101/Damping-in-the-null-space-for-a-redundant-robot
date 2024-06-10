function [alpha, a, d, theta] = calc_table_from_rot(dh_mat)
    % assert contains a rotation mat
    M_r = dh_mat(1:3, 1:3);
    assert(isequal(int32(M_r*M_r'), eye(3)))
    assert(int32(det(M_r)) == 1)

    alpha = atan2(M(3,2), M(3,3));
    theta = atan2(M(2, 1), M(1, 1));
    a = M(1, 4)/M(1,1);
    d = M(3, 4);
end

