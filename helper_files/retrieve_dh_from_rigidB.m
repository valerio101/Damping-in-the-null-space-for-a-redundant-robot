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

% cfg = [pi/2;pi/2;pi/2;pi/2;pi/2;pi/2;pi/2;];
cfg = [0;0;0;0;0;0;0;];

% Set robot DH params
dhparams = r.kuka_lbr_4p_dh_table;
new_dh = zeros(7, 4);  % a, alpha, d, theta
A0e = eye(4);
for i=2:8
    curr_dh = robot_model.Bodies{i}.Joint.JointToParentTransform;

    alpha = atan2(curr_dh(3, 2), curr_dh(3, 3));
    a = curr_dh(1, 4) / curr_dh(1, 1);
    d = curr_dh(3, 4);

    if i == 2
        d = d + 0.01;
    end

    new_dh(i-1, 1:4) = [a, alpha, d, 0];

    A0e = A0e * dh_mat_from_table( ...
                        new_dh(i-1, 1), ...
                        new_dh(i-1, 2), ...
                        new_dh(i-1, 3), ...
                        new_dh(i-1, 4))
    r2 = getTransform(robot_model, robot_model.homeConfiguration, robot_model.Bodies{i}.Name)

    disp(isequal(A0e, r2));
end

disp(new_dh);