classdef CoppeliaHelper
    %COPPELIAHELPER Helper class to handle interaction between Matlab and CoppeliaSim
    
    properties
        sim;				% File-descriptor-like object to manage connection
        clientID;			% The client ID associated to this connection
        joints_num_handle = []	% List of joint handles
        sampling_time;		% Sampling time of the simulation
    end
    
    methods
        function obj = CoppeliaHelper(sampling_time)
            % Starts a connection to Collelia Sim
            obj.sampling_time = sampling_time;	

            addpath('vrep_lib/');
            client = RemoteAPIClient();
            obj.sim = client.require('sim');
            
            % obj.sim.loadScene('./vrep_sim/kuka_scene.ttt');

            % Enable the synchronous mode on the client: (integration step on call)
            obj.sim.setStepping(true);
            % Start the simulation
            obj.sim.startSimulation();
            
            % Retrieve the object handles associated to each joint
            obj.joints_num_handle = zeros(1, 7);
            for i = 1:7 
                obj.joints_num_handle(i) = obj.sim.getObject(strcat('/LBR4p_joint',int2str(i)));
            end
            
            % Set all the joints in dynamic mode
            %obj.sim.setJointTargetVelocity(obj.joints_num_handle(1), 1000);
            %obj.sim.setJointForce(obj.joints_num_handle(1), 0);
            for i= 1:7
                obj.sim.setJointTargetVelocity(obj.joints_num_handle(i), 1000);
                % obj.sim.setJointForce(obj.joints_num_handle(i), 0);
                % obj.sim.getObjectInt32Param(obj.joints_num_handle(i), obj.sim.jointintparam_dynctrlmode, obj.sim.jointdynctrl_free);
                % obj.sim.setJointMode(obj.joints_num_handle(i), obj.sim.jointmode_dynamic, 0);
            end
        end

        function endConnection(obj)
            obj.sim.stopSimulation();
        end

        function [joints_position] = getJointsPosition(obj)
            % getJointsPosition: Retrieves the position of all the robot's joints (q variables).
            
            % Retrieve the position of each joint
            joints_position = zeros(length(obj.joints_num_handle), 1);
            for i = 1:length(obj.joints_num_handle)
                joint_pos = obj.sim.getJointPosition(obj.joints_num_handle(i));
                joints_position(i) = joint_pos;
            end
        end

        function [joints_velocity] = getJointsVelocity(obj)
            % getJointsVelocity: Retrieves the velocity of all the robot's joints (q_dot variables).
            
            % Retrieve the velocity of each joint
            joints_velocity = zeros(length(obj.joints_num_handle), 1);
            for i = 1:length(obj.joints_num_handle)
                joint_vel = obj.sim.getJointVelocity(obj.joints_num_handle(i));
                joints_velocity(i) = joint_vel;
            end
        end

        function commandTorque(obj, torques)
            % Commands the given torques to the robot.
            % torques: an array with a size equal to the number of joints,
            %  containing at position i the torque to command to joint i.
            for i=1:length(obj.joints_num_handle)
                % obj.sim.setJointTargetForce(obj.joints_num_handle(i), torques(i))
                obj.sim.setJointForce(obj.joints_num_handle(i), torques(i));
            end
        end

        function followTrajectory(obj, robot, trajectory, duration)
            % followTrajectory: Makes the robot defined in robot follow the
            % given trajectory in the Coppelia simulation.
            % robot: An instance of the KukaLbr4pRobot class
            % trajectory: A function of time that defines the path to follow.
            % duration: The number of seconds that this simulation should last

            % Save start time
            start_time = obj.sim.getSimulationTime();

            p_dot = diff(trajectory);

            curr_time = obj.sim.getSimulationTime();
            while curr_time - start_time < duration
                % Get the relative time from simulation start
                t = curr_time - start_time;
                
                % Measure the robot's joints position and velocity
                q = obj.getJointsPosition();
                q_dot = obj.getJointsVelocity();

                % Get the value of the torque to command (to each joint) from the controller
                p_des = trajectory(t);
                [robot, u] = TorqueControllers.fullLinearizationInNullSpace(robot, q, q_dot, p_des, p_dot(t));
                % u = [130; 130; 130; 130; 130; 130; 130];

                % Command the computed torque
                disp("commanding torque...")
                obj.commandTorque(u)
                disp("time" )
                disp(t);

                % Trigger the next simulation step
                obj.sim.step();
                curr_time = obj.sim.getSimulationTime();

                disp("finished step")  % DEBUG
            end
        end
    end
end

