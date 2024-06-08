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
            % Enable the synchronous mode on the client: (integration step on call)
            obj.sim.setStepping(true);
            % Start the simulation
            obj.sim.startSimulation();
            
            % Retrieve the object handles associated to each joint
            obj.joints_num_handle = zeros(1, 7);
            for i = 1:7 
                obj.joints_num_handle(i) = obj.sim.getObject(strcat('/LBR4p_joint',int2str(i)));
            end
            
            % Retrieve the position of each joint
            % for i = 1:7
            %     [~, joint_pos] = obj.sim.getJointPosition(obj.joints_num_handle(i));
            % end
        end

        function endConnection(obj)
            obj.sim.stopSimulation();
        end

        function commandTorque(obj, torques)
            % Commands the given torques to the robot.
            % torques: an array with a size equal to the number of joints,
            %  containing at position i the torque to command to joint i.
            for i=1:7
                obj.sim.setJointTargetForce(obj.joints_num_handle(i), torques(i))
            end
        end
    end
end

