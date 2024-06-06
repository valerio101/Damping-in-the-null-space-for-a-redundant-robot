classdef CoppeliaHelper
    %COPPELIAHELPER Helper class to handle interaction between Matlab and CoppeliaSim
    
    properties
        sim;				% File-descriptor-like object to manage connection
        clientID;			% The client ID associated to this connection
        robot_joints = []	% List of joint handles
        sampling_time;		% Sampling time of the simulation
    end
    
    methods
        function obj = CoppeliaHelper(port, sampling_time)
            obj.sampling_time = sampling_time;	

            addpath vrep_lib/;
            obj.sim = remApi('remoteApi');
            % End all active communication threads
            obj.sim.simxFinish(-1);
            % Start a new communication thread (blocking call)
            obj.clientID = obj.sim.simxStart('127.0.0.1', port, true, true, 5000, 5);
            % Inform of the connection result
            if (obj.clientID > -1)
                disp('Connected to simulator');
            else
                disp('Error in connection');
            end
            % Enable the synchronous mode on the client: (integration step on call)
            obj.sim.simxSynchronous(obj.clientID, true);
            % Start the simulation (and block communications until reply received)
            obj.sim.simxStartSimulation(obj.clientID, obj.sim.simx_opmode_blocking);
            for i = 1:7 
                [~,obj.robot_joints(i)] = obj.sim.simxGetObjectHandle(obj.clientID, strcat('LBRiiwa14R820_joint',int2str(i)), obj.sim.simx_opmode_blocking);
            end
        
            for i = 1:7
                [~, joint_pos] = obj.sim.simxGetJointPosition(obj.clientID, obj.robot_joints(i), obj.sim.simx_opmode_streaming);
            end
        end
    end
end

