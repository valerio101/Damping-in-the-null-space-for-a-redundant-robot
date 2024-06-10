function [skew_mat] = calc_vec_skew_mat(v)
x = v(1);
y = v(2);
z = v(3);
skew_mat = [0 -z y; z 0 -x; -y x 0];
end

