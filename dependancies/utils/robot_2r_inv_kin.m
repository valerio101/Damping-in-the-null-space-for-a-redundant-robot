syms q1 q2 real

% syms l1 l2 real
l1 = 2;
l2 = 1;

p = [(3/sqrt(2)); -1/sqrt(2)];

c2 = (p(1)^2 + p(2)^2 - (l1^2 + l2^2)) / (2*l1*l2);
s2 = sqrt(1-c2^2);
% s2 = -sqrt(1-c2^2);
q2 = atan2(s2, c2);
s1 = p(2)*(l1 + l2*c2) - p(1)*l2*s2;
c1 = p(1)*(l1 + l2*c2) + p(2)*l2*s2;
q1 = atan2(s1, c1);
disp(['q1: ', num2str(q1')]);
disp(['q2: ', num2str(q2')]);