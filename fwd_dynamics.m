clear;
clc;

num_joints = 7;
robot = KukaLbr4pRobot();
[robot, M_q, c_q_qdot, g_q] = robot.get_numerical_dyn_terms();

% Define the path to follow
syms t real
circle_center = [0; 0; 0];
u_circle_plane = [1; 0; 0];  % must be unit vec and orth to v
v_circle_plane = [0; 1; 0];  % must be unit vec and orth to u
T = 10;  % trajectory duration in seconds
% TODO: add radius
p(t) = circle_center + u_circle_plane*cos((t/T) * (2*sym(pi))) + v_circle_plane*sin((t/T) * (2*sym(pi)));
p_dot = diff(p);

% Initial conditions [q1, q2, dq1, dq2]
q0 = zeros(1, num_joints);
qdot0 = zeros(1, num_joints);
y0 = cat(2, q0, qdot0);
tspan = [0 T];  % Time span for the simulation

% Integrate the equations of motion using ode45
[t, y] = ode45(@(t,y) robot_dynamics(t,y,num_joints,robot, p, p_dot), tspan, y0);

% y(1:7) -> q(t)  t->0,10
% y(8:14) -> q_dot(t)   t->0,10

% Plot the results
figure;
subplot(2, 1, 1);
plot(t, y(:, 1:2));
title('Joint Positions');
xlabel('Time (s)');
ylabel('Position (rad)');
legend('q1', 'q2');

subplot(2, 1, 2);
plot(t, y(:, 3:4));
title('Joint Velocities');
xlabel('Time (s)');
ylabel('Velocity (rad/s)');
legend('dq1', 'dq2');

function dydt = robot_dynamics(t, y, num_joints, robot, p, p_dot)
    curr_joint_pos = y(1:num_joints);
    curr_joint_vel = y(num_joints+1:2*num_joints);

    % Define the dynamic parameters
    [robot, M_q, c_q_qdot, g_q] = robot.get_numerical_dyn_terms();
    curr_joint_pos_cell = num2cell(curr_joint_pos);
    curr_joint_vel_cell = num2cell(curr_joint_vel);
    M_q = M_q(curr_joint_pos_cell{2:7});
    c_q_qdot = c_q_qdot(curr_joint_pos_cell{2:7}, curr_joint_vel_cell{:});
    g_q = g_q(curr_joint_pos_cell{:});
    
    p_des = p(t);
    p_dot_des = p_dot(t);
    [robot, tau] = TorqueControllers.fullLinearizationInNullSpace(robot, curr_joint_pos, curr_joint_vel, p_des, p_dot_des);

    % Compute the joint accelerations
    ddq = M_q \ (tau - c_q_qdot - g_q);

    % Return the state derivatives
    dydt = [curr_joint_vel; ddq];
end