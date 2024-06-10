function [best_H, best_min_count, best_minors] = find_best_non_sing_mult_mat(A)
%FIND_BEST_NON_SING_MULT_MAT Finds the best matrix H to postmultiply to the
% given  matrix A in order to get as many minors as possible equal to 0 for
% the new matrix A*H.

[~, n] = size(A);
h_comb = table2array(combinations([-1,0], [-1,0], [-1,0]));

best_H = 0;
best_min_count = 0;
best_minors = 0;

for i=1:8
    % Compute a H matrix
    H = eye(n);
    for j=1:n-1
        H(j+1, j) = h_comb(i, j);
    end

    % Compute the minors for A multiplied by the current H
    all_minors = find_all_minors(A*H);
    % Count how many minors equal to 0 were found
    minors_zero_count = sum(cellfun(@(el) all(el == '0'), all_minors));

    if minors_zero_count > best_min_count
        best_min_count = minors_zero_count;
        best_H = H;
        best_minors = all_minors;
    end
end

end

