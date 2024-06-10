classdef TorqueControllers
% TorqueControllers The class that defines all the controllers used for Cartesian control in this project
    
    properties(Constant)
        K_p = 10;
        K_d = 10;
    end

    methods(Static)
        function u = fullLinearizationInNullSpace(curr_joint_pos, curr_joint_vel, curr_cart_pos)
            % Returns a control law that performs linearization and decoupling of the robot in the
            %  Cartesian Space, while following the provided trajectory.
            % curr_joint_pos: The position of all the joints at the current instant (q_i).
            % curr_joint_vel: The velocity of all the joints at the current instant (q_dot_i).
            % curr_cart_pos: The position to reach in the Cartesian space at the current instant (p_des(t)).
            
            [M, c, g] = KukaLbrRobot.getDynTerms(); % TODO: to define
            J = KukaLbrRobot.getJacobian(); % TODO: to define

            Jpinv = subs(J, KukaLbrRobot.joint_pos, [])

            a = Jpinv * (K_p * (curr_cart_pos))
        end
    end
end