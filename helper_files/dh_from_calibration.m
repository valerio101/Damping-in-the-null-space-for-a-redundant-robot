clear;
clc;

% Load the rigidBodyTree object
robot = loadrobot('kukaIiwa14', 'DataFormat', 'row'); % Example robot, replace with your robot

% Define the number of experiments
numExperiments = 20;

% Define the joint configurations for the experiments
% Replace these with actual configurations for your robot
jointConfigs = rand(numExperiments, 7);

% Initialize arrays to store end-effector positions
endEffectorPositions = zeros(numExperiments, 3);

% Collect the end-effector positions for each configuration
for i = 1:numExperiments
    % Set the robot configuration
    config = jointConfigs(i, :);
    a_mat = getTransform(robot, config, robot.Bodies{8}.Name, robot.Bodies{1}.Name);
    endEffectorPositions(i, :) = a_mat(1:3, 4);
end


% Define the objective function for optimization
function error = objectiveFunction(dhParams, jointConfigs, endEffectorPositions, robot)
    numExperiments = size(jointConfigs, 1);
    totalError = 0;
    
    % Update the robot's DH parameters
    robot = updateDHParameters(robot, dhParams);
    
    for i = 1:numExperiments
        config = jointConfigs(i, :);
        a_mat = getTransform(robot, config, robot.Bodies{8}.Name, robot.Bodies{1}.Name);
        endEffectorPosEst = a_mat(1:3, 4);
        error = norm(endEffectorPositions(i, :) - endEffectorPosEst');
        totalError = totalError + error;
    end
    
    % Return the total error
    error = totalError;
end

% Define a function to update the DH parameters of the robot
function robot = updateDHParameters(robot, dhParams)
    for i = 2:8
        body = robot.Bodies{i};
        joint = body.Joint;
        
        a = dhParams(i, 1);
        alpha = dhParams(i, 2);
        d = dhParams(i, 3);
        theta = dhParams(i, 4);
        
        setFixedTransform(joint, [a alpha d theta], 'dh');
        % body.Joint = joint;
        replaceJoint(robot, body.Name, joint);
        replaceBody(robot, body.Name, body);
    end
end

% Initial guess for DH parameters
initialDHParams = zeros(robot.NumBodies, 4); % Adjust with reasonable initial guesses

% Perform the optimization to find the best DH parameters
options = optimoptions('fminunc', 'Display', 'iter', 'Algorithm', 'quasi-newton');
optimalDHParams = fminunc(@(dhParams) objectiveFunction(dhParams, jointConfigs, endEffectorPositions, robot), initialDHParams, options);

% Update the robot with the optimal DH parameters
robot = updateDHParameters(robot, optimalDHParams);

% Display the optimal DH parameters
disp('Optimal DH Parameters:');
disp(optimalDHParams);
