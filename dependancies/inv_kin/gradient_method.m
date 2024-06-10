function [q_res] = gradient_method(r_d, dir_kin, joints)
    %GRADIENT_METHOD Calcualtes the inverse kinematics (q) using the Gradient
    %numerical method
    % r_d: Vector containing the desidered position
    % dir_kin: A vector describing the direct kinematics of the manipulator
    % w.r.t. the joints q (f_r(q)).
    % joints: A vector containing syms representing the joints variables (e.g.
    % [q1, q2, ...]).
    
    % The dimension of the q vector (= the number of joints)
    m = length(joints);
    % Initialize the q vector randomly
    q = ones(m, 1);
    
    % The analytical Jacobian and its transposed (with syms)
    j_r = jacobian(dir_kin, joints);
    j_r_tr = transpose(j_r);
    
    % Set the number of iteration steps
    num_steps = 50;
    alpha = 0.1;
    q_res = q;
    for k = 1:num_steps
        % Calculate the value of the direct kinematics for the current
        % joints' configuration.
        curr_dir_kin = subs(dir_kin, joints, q_res);
        % Evaluate the inverse analytical jacobian at the current q
        j_r_tr_q = subs(j_r_tr, joints, q_res);
        q_res = q_res - alpha * j_r_tr_q * (r_d - curr_dir_kin);
        q_res = double(q_res);
    end
end

