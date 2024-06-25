clear;
clc;

addpath("../dependancies/dh");
addpath("../dependancies/rotations");
addpath("../dependancies/utils");
addpath("../dependancies/inv_kin");
addpath("../dependancies/dyn_model");
addpath("../dependancies/redundancy");
addpath("../modules/")

function setGlobalRobot(val)
global robot;
robot = val;
end
function r = getGlobalRobot
global robot;
r = robot;
end

% Intialize the KUKA robot
r = KukaLbr4pRobot();
setGlobalRobot(r);

robot_model = importrobot('iiwa14.urdf');
robot_model.DataFormat = 'column';
robot_model.Gravity = [0, -9.80665, 0];

% Set robot DH params
dhparams = r.kuka_lbr_4p_dh_table;
dhparams(:, 4) = zeros(7,1);
dhparams = double(dhparams);
setFixedTransform(robot_model.Bodies{2}.Joint,dhparams(1,:),'dh');
setFixedTransform(robot_model.Bodies{3}.Joint,dhparams(2,:),'dh');
setFixedTransform(robot_model.Bodies{4}.Joint,dhparams(3,:),'dh');
setFixedTransform(robot_model.Bodies{5}.Joint,dhparams(4,:),'dh');
setFixedTransform(robot_model.Bodies{6}.Joint,dhparams(5,:),'dh');
setFixedTransform(robot_model.Bodies{7}.Joint,dhparams(6,:),'dh');
setFixedTransform(robot_model.Bodies{8}.Joint,dhparams(7,:),'dh');

% Set robot dynamic parameters TODO:
% getBody(robot_inertia, "iiwa_link_1")

% smimport(robot_model_model)
open_system('robot_simulink.slx');

% Load the Simulink file:
% sfile = "./simulink_proj/robot_model.slx";
% load_system(sfile);
% Run the simulation:
% sout = sim(sfile,'StopTime','10.0');