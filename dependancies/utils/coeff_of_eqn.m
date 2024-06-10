% Find the coefficients of an equation q(s), given some conditions

% Given values
q1 =  q_in; % assign the known value for q(0)
q2 =  q_int; % assign the known value for q(1/2)

% Create symbolic variables
syms a1 a2 b1 b2 c1 c2
syms d1 d2 e1 e2 f1 2
syms q(s)

a = [a1; a2];
b = [b1; b2];
c = [c1; c2];
q(s) = a*s^2 + b*s + c;

% Equations
eq1 = q(0) == q1;
eq2 = q(1/2) == q2;
eq3 = a + b == [2.3620; -4.5568];

% Solve the system of equations
sol = solve([eq1, eq2], [a, b, c]);

% Extract the values of a, b, and c from the solution
a_val = [sol.a1; sol.a2];
b_val = [sol.b1; sol.b2];
c_val = [sol.c1; sol.c2];

a_val = double(a_val)
b_val = double(b_val)
c_val = double(c_val)