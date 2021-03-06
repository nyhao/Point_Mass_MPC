% FORCESNLPsolver - a fast interior point code generated by FORCES
%
%   OUTPUT = FORCESNLPsolver(PARAMS) solves a multistage problem
%   subject to the parameters supplied in the following struct:
%       PARAMS.x0 - column vector of length 264
%       PARAMS.xinit - column vector of length 20
%       PARAMS.all_parameters - column vector of length 220
%
%   OUTPUT returns the values of the last iteration of the solver where
%       OUTPUT.x01 - column vector of size 24
%       OUTPUT.x02 - column vector of size 24
%       OUTPUT.x03 - column vector of size 24
%       OUTPUT.x04 - column vector of size 24
%       OUTPUT.x05 - column vector of size 24
%       OUTPUT.x06 - column vector of size 24
%       OUTPUT.x07 - column vector of size 24
%       OUTPUT.x08 - column vector of size 24
%       OUTPUT.x09 - column vector of size 24
%       OUTPUT.x10 - column vector of size 24
%       OUTPUT.x11 - column vector of size 24
%
%   [OUTPUT, EXITFLAG] = FORCESNLPsolver(PARAMS) returns additionally
%   the integer EXITFLAG indicating the state of the solution with 
%       1 - OPTIMAL solution has been found (subject to desired accuracy)
%       0 - Timeout - maximum number of iterations reached
%      -6 - NaN or INF occured during evaluation of functions and derivatives. Please check your initial guess.
%      -7 - Method could not progress. Problem may be infeasible. Run FORCESdiagnostics on your problem to check for most common errors in the formulation.
%    -100 - License error
%
%   [OUTPUT, EXITFLAG, INFO] = FORCESNLPsolver(PARAMS) returns 
%   additional information about the last iterate:
%       INFO.it        - number of iterations that lead to this result
%       INFO.res_eq    - max. equality constraint residual
%       INFO.res_ineq  - max. inequality constraint residual
%       INFO.pobj      - primal objective
%       INFO.mu        - duality measure
%       INFO.solvetime - Time needed for solve (wall clock time)
%       INFO.fevalstime - Time needed for solve (wall clock time)
%
% See also COPYING
