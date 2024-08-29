clear;
clc;
close all;
% Example script on how to use the MATLAB Robotics Toolbox for a trajectory tracking control task in joint space

%% Load the robot
robot_model = importrobot("../robot_model/kuka-lwr-4plus/model1.urdf", 'DataFormat', 'column');
n           = 7; % Number of DOFs
robot_model.Gravity = [0; 0; -9.80665];
setFixedTransform(robot_model.Bodies{8}.Joint, eye(4));

% Define the torque bounds
torque_low_bound = -1000;
torque_up_bound = 1000;

%% Simulation parameters
simulation_time = 10;
q_0             = zeros(n, 1); % Initial configuration
q_0(4, 1) = pi/2;
dq_0            = zeros(n, 1); % Initial velocity

%% Define a joint trajectory as a cubic spline from q_start to q_end with zero velocities
radius = 0.3;
circle_center = [-0.4; -0.4; 0.4];
u_circle_plane = [1; 0; 0];  % must be unit vec and orth to v
v_circle_plane = [0; 1; 0];  % must be unit vec and orth to u

% radius = 0.5;
% circle_center = [0; 0; 0.4];
% u_circle_plane = [1; 0; 0];  % must be unit vec and orth to v
% v_circle_plane = [0; 1; 0];  % must be unit vec and orth to u
T = simulation_time;  % trajectory duration in seconds
path = @(t) circle_center + u_circle_plane*radius*cos((t/T) * (2*pi)) + v_circle_plane*radius*sin((t/T) * (2*pi));
path_dot = @(t) -u_circle_plane*radius*(2*pi/T)*sin((t/T) * (2*pi)) + v_circle_plane*radius*(2*pi/T)*cos((t/T) * (2*pi));
path_ddot = @(t) -u_circle_plane*radius*(2*pi/T)*(2*pi/T)*cos((t/T) * (2*pi)) - v_circle_plane*radius*(2*pi/T)*(2*pi/T)*sin((t/T) * (2*pi));

%% Open the simulink model
open('model1.slx');

% Display the trajectory in Simscape
n = 10;
omega = linspace(0, T, n);
data_points = "[";
for i=1:n-1
    data_points = data_points + num2str(double(path(omega(i))')) + "; ";
end
data_points = data_points + "]";
set_param('model1/RobotModel/trajectorySpline', 'DataPoints', data_points);

%% Simulate the simulink model and store the results for plotting purposes
out = sim('model1.slx');
save("simulation_results", "out");

%% Plotting the results
load("simulation_results.mat");

% Configuration
f1 = figure; grid on; box on; hold on;
pl = plot(out.q.Time, out.q.Data, "LineWidth", 2);
pbaspect([2, 1, 1]);
xlabel("Time [s]", "Interpreter", "latex", "FontSize", 20);
ylabel("Configuration [rad]", "Interpreter", "latex", "FontSize", 20);
h=legend([arrayfun(@(i) sprintf('$q_{%d}$', i), 1:n, "UniformOutput", false)'; {'$q_{d}$'}], ...
        "Interpreter", "latex", ...
       "FontSize", 20, ...
       "NumColumns", 7, ...
       "Location", "northoutside");
h.ItemTokenSize = [10,5]; 

% Control action
f2 = figure; grid on; box on; hold on;
% plot(out.tau.Time, out.tau.Data, "LineWidth", 2);
plot(out.tau.Time, reshape(out.tau.Data, 7, size(out.tau.Time, 1))', "LineWidth", 2);
pbaspect([2, 1, 1]); 
xlabel("Time [s]", "Interpreter", "latex", "FontSize", 20);
ylabel("Torque [Nm]", "Interpreter", "latex", "FontSize", 20);
h=legend([arrayfun(@(i) sprintf('$u_{%d}$', i), 1:n, "UniformOutput", false)'; {'$tau_{d}$'}], ...
        "Interpreter", "latex", ...
       "FontSize", 20, ...
       "NumColumns", 7, ...
       "Location", "northoutside");
h.ItemTokenSize = [10,5]; 
%ylim([torque_low_bound-10, torque_up_bound+10]);

% Plot tracking
f3 = figure; grid on; box on; hold on;
plot(out.f_d.Time,out.f_d.Data', "LineWidth", 2);
hold on 
plot(out.f_q.Time,reshape(out.f_q.Data, [3, size(out.f_q.Time, 1)]),'--', "LineWidth", 2);
pbaspect([2, 1, 1]);
xlabel("Time [s]", "Interpreter", "latex", "FontSize", 20);
ylabel("Position [m]", "Interpreter", "latex", "FontSize", 20);
h=legend("$p_{des,1}$","$p_{des,2}$","$p_{des,3}$","$f_1(q)$","$f_2(q)$","$f_3(q)$",...
        "Interpreter", "latex", ...
       "FontSize", 20, ...
       "NumColumns", 7, ...
       "Location", "northoutside");
h.ItemTokenSize = [10,5]; 
%grid on; box on;

% Joints' velocity
f4 = figure; grid on; box on; hold on;
pl = plot(out.dq.Time, out.dq.Data, "LineWidth", 2);
pbaspect([2, 1, 1]);
xlabel("Time [s]", "Interpreter", "latex", "FontSize", 20);
ylabel("Joint velocity [rad/s]", "Interpreter", "latex", "FontSize", 20);
% pl = plot(out.q_d.Time, out.q_d.Data, "k--", "LineWidth", 2);
% set(pl, {'HandleVisibility'},  [{"on"}; repmat({"off"}, n-1, 1)]); % Keep the visibility in the legend of only one reference
h=legend([arrayfun(@(i) sprintf('$dq_{%d}$', i), 1:n, "UniformOutput", false)'; {'$dq_{d}$'}], ...
        "Interpreter", "latex", ...
       "FontSize", 20, ...
       "NumColumns", 7, ...
       "Location", "northoutside");
h.ItemTokenSize = [10,5]; 

%% Save the figures
exportgraphics(f1, "./fig/qBound25km.pdf");
exportgraphics(f2, "./fig/uBound25km.pdf");
exportgraphics(f3, "./fig/trackingBound25km.pdf");
exportgraphics(f4, "./fig/dqBound25km.pdf");


%%
% robot_model = importrobot("../robot_model/kuka-lwr-4plus/model1.urdf", 'DataFormat', 'column');
% robot_model.Gravity = [0; 0; -9.80665];
% % Numero di configurazioni iniziali da generare
% numConfigurations = 1000;
% 
% % Inizializza il valore massimo della norma del vettore gravità
% maxGravityNorm = 0;
% 
% % Genera configurazioni casuali e calcola la norma del vettore gravità
% for i = 1:numConfigurations
%     % Genera una configurazione casuale del robot
%     config = randomConfiguration(robot_model);
% 
%     % Ottieni il vettore gravità per la configurazione corrente
%     gravityVector = gravityTorque(robot_model,config);
% 
%     % Calcola la norma del vettore gravità
%     gravityNorm = norm(gravityVector);
%     % Aggiorna il valore massimo della norma del vettore gravità
%     if gravityNorm > maxGravityNorm
%         maxGravityNorm = gravityNorm;
% 
%     end
% end
% 
% % Visualizza il valore massimo della norma del vettore gravità
% disp(['Il valore massimo della norma del vettore gravità è: ', num2str(maxGravityNorm)]);