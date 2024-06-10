% Row-reduce the jacobian to its row-echelon form (forma a gradini)
rref_J = rref(J);
% Display the matrix to see columns associated to pivots
disp('RREF Jacobian:');
disp(rref_J);
% The basis of the range space of J will be the columns of J correspongin
% to the columns of RREF that contain pivots
% For example, the range of the current J has as basis its 1st and 2nd
% columns (=> The 3rd is a lin combin of the first 2).
range_space = J(:, 1:2);