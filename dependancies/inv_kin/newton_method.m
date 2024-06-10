function [q_res] = newton_method(r_d, dir_kin, joints, init_guess)
    %NEWTON_METHOD Calcualtes the inverse kinematics (q) using the Newton
    %numerical method
    % r_d: Vector containing the desidered position
    % dir_kin: A vector describing the direct kinematics of the manipulator
    % w.r.t. the joints q (f_r(q)).
    % joints: A vector containing syms representing the joints variables (e.g.
    % [q1, q2, ...]).
    % init_guess: The q0 that the algorithms starts from, and considers as
    % initial guess (e.g. [1; 1; 1]).

    % The dimension of the q vector (= the number of joints)
    m = length(joints);

    if exist('init_guess','var')
        % init_guess was provided
        q = init_guess;
    else
        % init_guess was not provided, then set the defualt value
        q = ones(m, 1);
    end

    % Initialize the q vector randomly
    % q = ones(m, 1);
    
    % The analytical Jacobian and its inverse (with syms)
    j_r = jacobian(dir_kin, joints);
    j_r_inv = simplify(pinv(j_r));
    
    % Set the number of iteration steps
    num_steps = 3;
    q_res = q;
    for k = 1:num_steps
        % Calculate the value of the direct kinematics for the current
        % joints' configuration.
        curr_dir_kin = subs(dir_kin, joints, q_res);
        % Evaluate the inverse analytical jacobian at the current q
        j_r_inv_q = subs(j_r_inv, joints, q_res);
        q_res = q_res + j_r_inv_q * (r_d - curr_dir_kin);
        q_res = double(q_res);
        disp(['q_res: ', num2str(q_res')]);
    end
end

