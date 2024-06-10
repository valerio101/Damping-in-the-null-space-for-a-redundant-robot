% Plot the primary workspace of a planar manipulator with 2 joints


% Define the forward kinematics equations for your manipulator
L1 = 3; % Length of link 1
L2 = 1; % Length of link 2

% Joint limits
theta1_range = linspace(0, 2*pi, 100); % Joint 1 limits
theta2_range = linspace(0, 2*pi, 100); % Joint 2 limits

% Initialize arrays to store end-effector positions
x_end_effector = zeros(length(theta1_range), length(theta2_range));
y_end_effector = zeros(length(theta1_range), length(theta2_range));

% Calculate end-effector positions for all joint configurations
for i = 1:length(theta1_range)
    for j = 1:length(theta2_range)
        theta1 = theta1_range(i);
        theta2 = theta2_range(j);

        % Forward kinematics equations
        x_end_effector(i, j) = L1*cos(theta1) + L2*cos(theta1 + theta2);
        y_end_effector(i, j) = L1*sin(theta1) + L2*sin(theta1 + theta2);
    end
end

% Plot the workspace
figure;
plot(x_end_effector(:), y_end_effector(:), 'b.');
title('Workspace of Planar Manipulator');
xlabel('X-axis');
ylabel('Y-axis');
grid on;
axis equal;
