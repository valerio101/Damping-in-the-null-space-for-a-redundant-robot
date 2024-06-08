addpath(genpath("/Users/salvatore/Desktop/Università/Development/Robotics/functions/dh"))
addpath(genpath("/Users/salvatore/Desktop/Università/Development/Robotics/functions/rotations"))
addpath(genpath("/Users/salvatore/Desktop/Università/Development/Robotics/functions/utils"))
addpath(genpath("/Users/salvatore/Desktop/Università/Development/Robotics/functions/inv_kin"))
addpath(genpath("/Users/salvatore/Desktop/Università/Development/Robotics/functions/dyn_model"))
addpath(genpath("/Users/salvatore/Desktop/Università/Development/Robotics/functions/redundancy"))

clear;
clc;

SAMPLING_TIME = 0.05;

% addpath(genpath("/Users/salvatore/Desktop/Università/Development/Robotics/functions/dh"))
% addpath("modules/")

% % Connect to Coppelia
% copHelper = CoppeliaHelper(SAMPLING_TIME);
% % End the connection to Coppelia
% copHelper.endConnection()

% Get the symbolic expressions of matrix M, c and g
% [M, c, g] = get_dyn_terms();
% Save the computed matrices to a local file
save('./kuka_lbr4p_dyn_terms.mat', 'M', 'c', 'c')
