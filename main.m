clear;
clc;

addpath("dependancies/dh");
addpath("dependancies/rotations");
addpath("dependancies/utils");
addpath("dependancies/inv_kin");
addpath("dependancies/dyn_model");
addpath("dependancies/redundancy");
addpath("modules/")

% Define the path to follow
syms t real
circle_center = [0; 0; 0];
% circle_center = [-1; -1; 0.79];
u_circle_plane = [1; 0; 0];  % must be unit vec and orth to v
v_circle_plane = [0; 1; 0];  % must be unit vec and orth to u
T = 10;  % trajectory duration in seconds
% TODO: add radius
path(t) = circle_center + u_circle_plane*cos((t/T) * (2*sym(pi))) + v_circle_plane*sin((t/T) * (2*sym(pi)));

% Intialize the KUKA robot
robot = KukaLbr4pRobot();

% Connect to Coppelia
SAMPLING_TIME = 0.05;
copHelper = CoppeliaHelper(SAMPLING_TIME);

% Draw the circle 3 times
copHelper.followTrajectory(robot, path, 3*T);

% End the connection to Coppelia
copHelper.endConnection()