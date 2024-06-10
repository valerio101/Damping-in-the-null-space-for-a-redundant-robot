function [all_minors] = find_all_minors(A)
    % Returns the list of all the minors of the given matrix A, associated
    % to square nxn submatrices.
    [m,n] = size(A);
    v=1:m;
    rows_to_rem = nchoosek(v, m-n);
    all_minors = cell(length(rows_to_rem), 1);
    for i=1:length(rows_to_rem)
        rows_to_keep = true(size(A, 1), 1);
        rows_to_keep(rows_to_rem(i, :)) = false;
        submat = A(rows_to_keep, :);
    
        minor = simplify(det(submat));
        all_minors{i} = minor;
    end
    
    % Assert that the minors are not all 0
    % all_zeros = cellfun(@(el) all(el == '0'), all_minors);
    % all_zeros = cellfun(@(el) all(el == (0 == 0)), all_minors);
    % assert((any(all_zeros)))
    
    % r = solve(all_minors, [q1,q2,q3,q4], 'Real', true);
end