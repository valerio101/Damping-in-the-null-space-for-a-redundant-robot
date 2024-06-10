function [mat] = generate_symb_inertia_mat(name, dimension)
%GENERATE_SYMB_INERTIA_MAT Generates an Inertia matrix filled with symbolic
%values with the given name and the given dimension.
%   Detailed explanation goes here
mat = sym(name, [dimension, dimension], 'real');
mat = tril(mat,0) + tril(mat,-1).';
end

