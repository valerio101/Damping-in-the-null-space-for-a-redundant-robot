addpath(genpath("/Users/salvatore/Desktop/Università/Development/Robotics/functions/dh"))
addpath(genpath("/Users/salvatore/Desktop/Università/Development/Robotics/functions/rotations"))
addpath(genpath("/Users/salvatore/Desktop/Università/Development/Robotics/functions/utils"))
addpath(genpath("/Users/salvatore/Desktop/Università/Development/Robotics/functions/inv_kin"))
addpath(genpath("/Users/salvatore/Desktop/Università/Development/Robotics/functions/dyn_model"))
addpath(genpath("/Users/salvatore/Desktop/Università/Development/Robotics/functions/redundancy"))
addpath("modules/")

clear;
clc;

SAMPLING_TIME = 0.05;

% % Connect to Coppelia
% copHelper = CoppeliaHelper(SAMPLING_TIME);
% % End the connection to Coppelia
% copHelper.endConnection()

robot = KukaLbr4pRobot();

curr_joint_pos = [30; 30; 30; 30; 30; 30; 30];
curr_joint_vel = [30; 30; 30; 30; 30; 30; 30];
curr_cart_pos = [0; 0; 0];
u = TorqueControllers.fullLinearizationInNullSpace( ...
    robot, curr_joint_pos, curr_joint_vel, curr_cart_pos);
disp(u);

% Get the symbolic expressions of matrix M, c and g
% disp("computing")
% tic
% [M, c, g] = get_dyn_terms();
% toc
% Save the computed matrices to a local file
% save('./kuka_lbr4p_dyn_terms.mat', 'M', 'c', 'g')
