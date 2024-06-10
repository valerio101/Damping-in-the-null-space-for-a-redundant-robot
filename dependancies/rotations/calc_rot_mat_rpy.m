% Given a list of angles and a list of axis computes the rotation matrix
% according to the Roll-Pitch-Yaw definition.
% e.g. calc_rot_mat_euler([pi, pi, pi], ['Y', 'Z', 'X'])
function [rot_mat] = calc_rot_mat_rpy(angles_list)
    new_angles_list = flip(angles_list);
    rot_mat = calc_rot_mat_euler(new_angles_list, ['Z', 'Y', 'X']);
end