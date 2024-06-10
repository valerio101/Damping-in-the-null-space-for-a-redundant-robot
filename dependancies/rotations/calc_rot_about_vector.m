function [rotm] = calc_rot_about_vector(r,theta)
sq_r = r*r';
skew_r = calc_vec_skew_mat(r);

rotm = sq_r + (eye(3)-sq_r)*cos(theta) + skew_r*sin(theta);
end

