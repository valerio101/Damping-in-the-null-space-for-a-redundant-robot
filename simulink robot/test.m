clear;
clc;

addpath("../dependancies/dh");
addpath("../dependancies/rotations");
addpath("../dependancies/utils");
addpath("../dependancies/inv_kin");
addpath("../dependancies/dyn_model");
addpath("../dependancies/redundancy");
addpath("../modules/");
addpath("../robot_model/kuka-lwr-4plus");

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

% robot_to_try = "iiwa14";
robot_to_try = "lwr";

if robot_to_try == "iiwa14"
    robot_model = importrobot('iiwa14.urdf'); % Load KUKA iiwa14
else
    robot_model = importrobot("../robot_model/kuka-lwr-4plus/model1.urdf"); % Load KUKA LWR 4+
end
robot_model.DataFormat = 'column';
robot_model.Gravity = [0, 0, -9.80665];

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

% Set robot dynamic parameters (equal to KUKA LWR4+)
vals = load('../resources/paper_vals.mat').d;
for i=2:8
    j = i-1;
    mass_key = strcat("m", int2str(j));
    c_i_x = strcat("c", int2str(j), ',1');
    c_i_y = strcat("c", int2str(j), ',2');
    c_i_z = strcat("c", int2str(j), ',3');
    I_i_xx = strcat("I", int2str(j), ',1_1');
    I_i_xy = strcat("I", int2str(j), ',1_2');
    I_i_xz = strcat("I", int2str(j), ',1_3');
    I_i_yy = strcat("I", int2str(j), ',2_2');
    I_i_yz = strcat("I", int2str(j), ',2_3');
    I_i_zz = strcat("I", int2str(j), ',3_3');

    robot_model.Bodies{i}.Mass = vals(mass_key);
    robot_model.Bodies{i}.CenterOfMass = [vals(c_i_x); vals(c_i_y); vals(c_i_z)];
    robot_model.Bodies{i}.Inertia = [vals(I_i_xx), vals(I_i_yy), vals(I_i_zz), vals(I_i_yz), vals(I_i_xz), vals(I_i_xy)];
end

% smimport(robot_model)
if robot_to_try == "iiwa14"
    open_system('robot_simulink.slx'); % iiwa14
else
    open_system('./kuka_test/lwr_scheme.slx'); % lwr4
end

% Load the Simulink file:
% sfile = "./simulink_proj/robot_model.slx";
% load_system(sfile);
% Run the simulation:
% sout = sim(sfile,'StopTime','10.0');