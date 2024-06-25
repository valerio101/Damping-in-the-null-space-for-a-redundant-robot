clear;
clc;

addpath("../dependancies/dh");
addpath("../dependancies/rotations");
addpath("../dependancies/utils");
addpath("../dependancies/inv_kin");
addpath("../dependancies/dyn_model");
addpath("../dependancies/redundancy");
addpath("../modules/")

robot_model = importrobot('iiwa14.urdf');
robot_model.DataFormat = 'column';
robot_model.Gravity = [0, -9.80665, 0];

%% Get DH params
% Initialize variables
numJoints = 7;
a = zeros(1, numJoints);
alpha = zeros(1, numJoints);
d = zeros(1, numJoints);

% Get the transformation from the base to each link
T = cell(1, numJoints);
% T{1} = getTransform(robot_model, robot_model.homeConfiguration, robot_model.Bodies{2}.Name);
T{1} = robot_model.Bodies{2}.Joint.JointToParentTransform;

for i = 3:numJoints+1
    % T{i-1} = getTransform(robot_model, robot_model.homeConfiguration, robot_model.Bodies{i}.Name);
    T{i-1} = robot_model.Bodies{i}.Joint.JointToParentTransform;
end

% Compute DH parameters
for i = 1:numJoints
    % if i == 1
    %     T_rel = T{i};
    % else
    %     T_rel = T{i-1} \ T{i};
    % end
    T_rel = T{i};

    % Extract DH parameters from the relative transformation matrix
    a(i) = T_rel(1,4);
    alpha(i) = atan2(T_rel(3,2), T_rel(3,3));
    d(i) = T_rel(3,4);
end

% Display DH Table
DHTable = table((1:numJoints)', a', alpha', d', ...
                'VariableNames', {'Joint', 'a', 'alpha', 'd'});
disp(DHTable);