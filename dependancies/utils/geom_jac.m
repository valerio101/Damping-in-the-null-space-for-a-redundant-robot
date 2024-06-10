syms q1 q2 q3 q4 a4 real

A01 = dh_mat_from_table(0, sym(pi)/2, 0, q1);
A12 = dh_mat_from_table(0, sym(pi)/2, 0, q2);
A23 = dh_mat_from_table(0, -sym(pi)/2, q3, 0);
A34 = dh_mat_from_table(a4, 0, 0, q4);

A02 = A01 * A12;
A03 = A02 * A23;
T04 = A03 * A34;
A04 = T04;

z0 = [0;0;1];
z1 = A01(1:3, 3);
z2 = A02(1:3, 3);
z3 = A03(1:3, 3);

p0e = T04(1:3, 4);
p00 = [0;0;0];
p01 = A01(1:3, 4);
% p02 = A02(1:3, 4);
p03 = A03(1:3, 4);

J_l = [cross(z0, (p0e - p00)), cross(z1, (p0e - p01)), z2, cross(z3, (p0e - p03))];
J_a = [z0, z1, [0;0;0], z3];
J_geom = simplify([J_l; J_a]);