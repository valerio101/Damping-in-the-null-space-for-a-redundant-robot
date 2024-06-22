function M = getInertiaMatrix(q)
%#codegen
robot_model = importrobot('iiwa14.urdf');
robot_model.DataFormat = 'column';
robot_model.Gravity = [0, -9.80665, 0];
M = massMatrix(robot_model, q);
end

