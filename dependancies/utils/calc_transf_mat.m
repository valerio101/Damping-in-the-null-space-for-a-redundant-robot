function transformation_mat = calc_transf_mat(rot_mat, transl_vec)
    transformation_mat = [rotm; 0 0 0];
    transl_vec(4) = 1;
    transformation_mat(:, 4) = transl_vec;
end