function [q_k_dot] = comp_task_prior_algo(t,jacobians,r_dots,curr_conf,q)
%COMP_TASK_PRIOR_ALGO Implementation of the task priority formulation (file 2.2)
%   t: The number of tasks
%   jacobians: A cell containing at index i the jacobian of task i.
%   r_dots: A cell containing at index i the velocity of task i.
%   curr_conf: The current joints configuration.
%   q: The vector of symbolic vars of joints position.
%   
% Example Usage:
% t = 2; % num tasks
% jacobians = cell(t, 1);
% r_dots = cell(t, 1);
% curr_conf = q_s;
% q = q;
% 
% jacobians{1} = j1;
% jacobians{2} = j2;
% r_dots{1} = r1;
% r_dots{2} = r2;
% 
% q_k_dot = comp_task_prior_algo(t,jacobians,r_dots,curr_conf,q);

for k = 1:t
    if k == 1
        q_dot_km1 = zeros(length(q), 1);
        p_a_km1 = eye(length(q));
    else
        q_dot_km1 = q_k_dot;
        p_a_km1 = p_a_k;
    end

    jacobians{k} = double(subs(jacobians{k}, q, curr_conf));
    j_a_k = cat(1, jacobians{1:k});
    p_a_k = double(eye(length(q)) - pinv(j_a_k)*j_a_k);

    j_pa = round(jacobians{k}*p_a_km1, 5);
    q_k_dot = q_dot_km1 + pinv(j_pa) * (r_dots{k} - jacobians{k}*q_dot_km1);
end 
end

