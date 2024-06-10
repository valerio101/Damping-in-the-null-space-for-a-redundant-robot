% Given a list of angles and a list of axis computes the rotation matrix
% according to the ZX'Z'' Euler angles definition.
% the angles can both be values and symbolic variables
% e.g. calc_rot_mat_euler([pi, pi, pi], ['Y', 'Z', 'X'])
function [rot_mat] = calc_rot_mat_euler(angles_list, axis_list)
    assert(isequal(size(angles_list), size(axis_list)), ...
        'The angles and axis lists must have the same dimensions.');
    
    % syms phi
    % rotx(phi) = [1 0 0
    %              0 cos(phi) -sin(phi);
    %              0 sin(phi) cos(phi)];
    % roty(phi) = [cos(phi) 0 sin(phi);
    %             0 1 0;
    %             -sin(phi) 0 cos(phi)];
    % rotz(phi) = [cos(phi) -sin(phi) 0;
    %             sin(phi) cos(phi) 0;
    %             0 0 1];
    
    rot_mat = eye(3);
    for i = 1:length(angles_list)
        curr_axis = axis_list(i);
        curr_angle = angles_list(i);

        if curr_axis == 'X'
            rot_mat = rot_mat * [1 0 0
                                 0 cos(curr_angle) -sin(curr_angle);
                                 0 sin(curr_angle) cos(curr_angle)];
        elseif curr_axis == 'Y'
            rot_mat = rot_mat * [cos(curr_angle) 0 sin(curr_angle);
                                 0 1 0;
                                 -sin(curr_angle) 0 cos(curr_angle)];
        else % curr_axis == 'Z'
            rot_mat = rot_mat * [cos(curr_angle) -sin(curr_angle) 0;
                                 sin(curr_angle) cos(curr_angle) 0;
                                 0 0 1];
        end
    end
end
