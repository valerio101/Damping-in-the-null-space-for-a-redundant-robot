robot = rigidBodyTree('DataFormat','column','MaxNumBodies',3);
L1 = 0.6;
L2 = 0.5;

% Add link and joint 1
body = rigidBody('link1');
joint = rigidBodyJoint('joint1', 'revolute');
setFixedTransform(joint,trvec2tform([0 0 0]));
% joint.JointAxis = [0 0 1];
body.Joint = joint;
addBody(robot, body, 'base');

% Add link and joint 2
body = rigidBody('link2');
joint = rigidBodyJoint('joint2','revolute');
setFixedTransform(joint, trvec2tform([L1,0,0]));
joint.JointAxis = [0 0 1];
body.Joint = joint;
addBody(robot, body, 'link1');

% Add the end-effector
body = rigidBody('tool');
joint = rigidBodyJoint('fix1','fixed');
setFixedTransform(joint, trvec2tform([L2, 0, 0]));
body.Joint = joint;
addBody(robot, body, 'link2');

% Define trajectory: circle
t = (0:0.2:10)'; % Time: 0 to 10 secs, 0.2s intervals
count = length(t);
center = [0.3 0.1 0];
radius = 0.15;
% Compute the value of theta for each instant (theta = (t/T)*2pi)
theta = t*(2*pi/t(end));
% Compute the desidered e.e. point for each instant
points = center + radius*[cos(theta) sin(theta) zeros(size(theta))];

% Preallocate the vectors of the configurations to reach each instant's
% point
q0 = homeConfiguration(robot);
ndof = length(q0);
qs = zeros(count, ndof);

% Define an inv. kin. solver
ik = inverseKinematics('RigidBodyTree', robot);
endEffector = 'tool';
% Starting from the initial configuration compute the joints'
% configurations for each desidered e.e. point
qInitial = q0;
weights = [0, 0, 0, 1, 1, 0]; % just care of e.e x y in pose
for i = 1:count
    % Get the current desidered e.e. position
    point = points(i,:);
    % Find the corresponding joints configuration
    qSol = ik(endEffector,trvec2tform(point),weights,qInitial);
    qInitial = qSol;
    % Store the configuration
    qs(i,:) = qSol;
end

% syms q(s)
% a = 4*q_fin + 4*q_in - 8*q_int;
% b = -2*q_fin - 4*q_in + 6*q_int;
% c = q_in;
% d = 2*(q_fin - q_int);
% e = 2*q_int - q_fin;
% q(s) = piecewise(s < 0.5, a*s^2 + b*s + c, s>=0.5, d*s + e);
% qs = zeros(count, 2);
% for i = 1:count
%     qs(i, :) = transpose(q(t(i)/t(end)));
% end

% Show the robot and trajectory
figure
% Plot the robot and the 
show(robot,qs(1,:)');
% show(robot);
view(2)
ax = gca;
ax.Projection = 'orthographic';
hold on
plot(points(:,1),points(:,2),'k') % Plot the desidered trajectory

% Define the obstacles
rectangle('Position',[-1 -2 1 1])

axis([-0.1 0.7 -0.3 0.5]) % Adjust the axis view
ax = gca;
ax.Projection = 'orthographic';

% Animate the robot
framesPerSecond = 15;
r = rateControl(framesPerSecond); % Set the loop speed
for i = 1:count
    show(robot,qs(i,:)','PreservePlot',false); % Draw the robot in the new configuration
    drawnow
    waitfor(r);
end