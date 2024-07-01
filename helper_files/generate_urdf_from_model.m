clear;
clc;

addpath("dependancies/dh");
addpath("dependancies/rotations");
addpath("dependancies/utils");
addpath("dependancies/inv_kin");
addpath("dependancies/dyn_model");
addpath("dependancies/redundancy");
addpath("modules/");
addpath("robot_model/kuka-lwr-4plus");

function setGlobalRobot(val)
global robot;
robot = val;
end
function r = getGlobalRobot
global robot;
r = robot;
end

% Trajectory
% syms t R T C1 C2 C3 real
% radius = R; % 0.5;
% circle_center = [C1; C2; C3]; % [0; 0; 0.4];
% u_circle_plane = [1; 0; 0];  % must be unit vec and orth to v
% v_circle_plane = [0; 1; 0];  % must be unit vec and orth to u
% % T = 10;  % trajectory duration in seconds
% path(t) = circle_center + u_circle_plane*radius*cos((t/T) * (2*pi)) + v_circle_plane*radius*sin((t/T) * (2*pi));
% path_dot(t) = diff(path, t);
% path_ddot(t) = diff(path_dot, t);

% Test the import
addpath("urdf/");
addpath("meshes/");
smimport("./urdf/model1-withDyn.urdf");
return;

% Intialize the KUKA robot
r = KukaLbr4pRobot();
setGlobalRobot(r);

% robot_to_try = "iiwa14";
robot_to_try = "lwr";

if robot_to_try == "iiwa14"
    robot_model = importrobot('iiwa14.urdf'); % Load KUKA iiwa14
else
    robot_model = importrobot("./robot_model/kuka-lwr-4plus/model1.urdf"); % Load KUKA LWR 4+
end
robot_model.DataFormat = 'column';
robot_model.Gravity = [0, 0, -9.80665];
% robot_model.Gravity = [0, 0, 0];

% Set robot DH params
% dhparams = r.kuka_lbr_4p_dh_table;
% dhparams(:, 4) = zeros(7,1);
% dhparams = double(dhparams);
% % setFixedTransform(robot_model.Bodies{2}.Joint,dhparams(1,:),'dh');
% for i=2:8
%     curr_dhparams = num2cell(dhparams(i-1, :));
%     setFixedTransform(robot_model.Bodies{i}.Joint, dh_mat_from_table(curr_dhparams{1:4}));
% end

% Set robot dynamic parameters (equal to KUKA LWR4+)
vals = load('./resources/paper_vals.mat').d;
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


% Export robot_model to .urdf
exporter = urdfExporter(robot_model);
exporter.ExportMesh = true;
writefile(exporter,OutputfileName="model1-withDyn.urdf")
smimport("./model1-withDyn.urdf");

% smimport(robot_model);
if robot_to_try == "iiwa14"
    open_system('./simulink robot/robot_simulink.slx'); % iiwa14
else
    open_system('./simulink robot/kuka_test/lwr_scheme.slx'); % lwr4
end

% Load the Simulink file:
% sfile = "./simulink_proj/robot_model.slx";
% load_system(sfile);
% Run the simulation:
% sout = sim(sfile,'StopTime',int2str(T));