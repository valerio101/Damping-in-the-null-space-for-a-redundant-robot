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
global robot
robot = val;
end
function r = getGlobalRobot
global robot
r = robot;
end

% Intialize the KUKA robot
r = KukaLbr4pRobot();
setGlobalRobot(r);

r.get_j_dot()

% getBody(robot_inertia, "iiwa_link_1")

robot_model = importrobot('iiwa14.urdf');
robot_model.DataFormat = 'column';
robot_model.Gravity = [0, -9.80665, 0];
%smimport(robot_model)
open_system('robot_simulink.slx');

% Load the Simulink file:
% sfile = "./simulink_proj/robot_model.slx";
% load_system(sfile);
% Run the simulation:
% sout = sim(sfile,'StopTime','10.0');