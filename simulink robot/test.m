clear all;
clc;
robot_model = importrobot('iiwa14.urdf');
robot_model.DataFormat = 'column';
robot_model.Gravity = [0, -9.80665, 0];
%smimport(robot_model)
open_system('robot_simulink.slx');

function M = getInertiaMatrix(q)
    robot_model = importrobot('iiwa14.urdf');
    robot_model.DataFormat = 'column';
    robot_model.Gravity = [0, -9.80665, 0];
    M = massMatrix(robot, q);
end

function C = getCoriolisMatrix(robot, q, qd)
    C = velocityProduct(robot, q, qd);
end

function G = getGravityMatrix(robot, q)
    G = gravityTorque(robot, q);
end