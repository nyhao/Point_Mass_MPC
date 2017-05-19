% FORCESNLPsolver - a fast interior point code generated by FORCES
%
%   OUTPUT = FORCESNLPsolver(PARAMS) solves a multistage problem
%   subject to the parameters supplied in the following struct:
%       PARAMS.x0 - column vector of length 4186
%       PARAMS.xinit - column vector of length 19
%       PARAMS.all_parameters - column vector of length 4186
%
%   OUTPUT returns the values of the last iteration of the solver where
%       OUTPUT.x001 - column vector of size 26
%       OUTPUT.x002 - column vector of size 26
%       OUTPUT.x003 - column vector of size 26
%       OUTPUT.x004 - column vector of size 26
%       OUTPUT.x005 - column vector of size 26
%       OUTPUT.x006 - column vector of size 26
%       OUTPUT.x007 - column vector of size 26
%       OUTPUT.x008 - column vector of size 26
%       OUTPUT.x009 - column vector of size 26
%       OUTPUT.x010 - column vector of size 26
%       OUTPUT.x011 - column vector of size 26
%       OUTPUT.x012 - column vector of size 26
%       OUTPUT.x013 - column vector of size 26
%       OUTPUT.x014 - column vector of size 26
%       OUTPUT.x015 - column vector of size 26
%       OUTPUT.x016 - column vector of size 26
%       OUTPUT.x017 - column vector of size 26
%       OUTPUT.x018 - column vector of size 26
%       OUTPUT.x019 - column vector of size 26
%       OUTPUT.x020 - column vector of size 26
%       OUTPUT.x021 - column vector of size 26
%       OUTPUT.x022 - column vector of size 26
%       OUTPUT.x023 - column vector of size 26
%       OUTPUT.x024 - column vector of size 26
%       OUTPUT.x025 - column vector of size 26
%       OUTPUT.x026 - column vector of size 26
%       OUTPUT.x027 - column vector of size 26
%       OUTPUT.x028 - column vector of size 26
%       OUTPUT.x029 - column vector of size 26
%       OUTPUT.x030 - column vector of size 26
%       OUTPUT.x031 - column vector of size 26
%       OUTPUT.x032 - column vector of size 26
%       OUTPUT.x033 - column vector of size 26
%       OUTPUT.x034 - column vector of size 26
%       OUTPUT.x035 - column vector of size 26
%       OUTPUT.x036 - column vector of size 26
%       OUTPUT.x037 - column vector of size 26
%       OUTPUT.x038 - column vector of size 26
%       OUTPUT.x039 - column vector of size 26
%       OUTPUT.x040 - column vector of size 26
%       OUTPUT.x041 - column vector of size 26
%       OUTPUT.x042 - column vector of size 26
%       OUTPUT.x043 - column vector of size 26
%       OUTPUT.x044 - column vector of size 26
%       OUTPUT.x045 - column vector of size 26
%       OUTPUT.x046 - column vector of size 26
%       OUTPUT.x047 - column vector of size 26
%       OUTPUT.x048 - column vector of size 26
%       OUTPUT.x049 - column vector of size 26
%       OUTPUT.x050 - column vector of size 26
%       OUTPUT.x051 - column vector of size 26
%       OUTPUT.x052 - column vector of size 26
%       OUTPUT.x053 - column vector of size 26
%       OUTPUT.x054 - column vector of size 26
%       OUTPUT.x055 - column vector of size 26
%       OUTPUT.x056 - column vector of size 26
%       OUTPUT.x057 - column vector of size 26
%       OUTPUT.x058 - column vector of size 26
%       OUTPUT.x059 - column vector of size 26
%       OUTPUT.x060 - column vector of size 26
%       OUTPUT.x061 - column vector of size 26
%       OUTPUT.x062 - column vector of size 26
%       OUTPUT.x063 - column vector of size 26
%       OUTPUT.x064 - column vector of size 26
%       OUTPUT.x065 - column vector of size 26
%       OUTPUT.x066 - column vector of size 26
%       OUTPUT.x067 - column vector of size 26
%       OUTPUT.x068 - column vector of size 26
%       OUTPUT.x069 - column vector of size 26
%       OUTPUT.x070 - column vector of size 26
%       OUTPUT.x071 - column vector of size 26
%       OUTPUT.x072 - column vector of size 26
%       OUTPUT.x073 - column vector of size 26
%       OUTPUT.x074 - column vector of size 26
%       OUTPUT.x075 - column vector of size 26
%       OUTPUT.x076 - column vector of size 26
%       OUTPUT.x077 - column vector of size 26
%       OUTPUT.x078 - column vector of size 26
%       OUTPUT.x079 - column vector of size 26
%       OUTPUT.x080 - column vector of size 26
%       OUTPUT.x081 - column vector of size 26
%       OUTPUT.x082 - column vector of size 26
%       OUTPUT.x083 - column vector of size 26
%       OUTPUT.x084 - column vector of size 26
%       OUTPUT.x085 - column vector of size 26
%       OUTPUT.x086 - column vector of size 26
%       OUTPUT.x087 - column vector of size 26
%       OUTPUT.x088 - column vector of size 26
%       OUTPUT.x089 - column vector of size 26
%       OUTPUT.x090 - column vector of size 26
%       OUTPUT.x091 - column vector of size 26
%       OUTPUT.x092 - column vector of size 26
%       OUTPUT.x093 - column vector of size 26
%       OUTPUT.x094 - column vector of size 26
%       OUTPUT.x095 - column vector of size 26
%       OUTPUT.x096 - column vector of size 26
%       OUTPUT.x097 - column vector of size 26
%       OUTPUT.x098 - column vector of size 26
%       OUTPUT.x099 - column vector of size 26
%       OUTPUT.x100 - column vector of size 26
%       OUTPUT.x101 - column vector of size 26
%       OUTPUT.x102 - column vector of size 26
%       OUTPUT.x103 - column vector of size 26
%       OUTPUT.x104 - column vector of size 26
%       OUTPUT.x105 - column vector of size 26
%       OUTPUT.x106 - column vector of size 26
%       OUTPUT.x107 - column vector of size 26
%       OUTPUT.x108 - column vector of size 26
%       OUTPUT.x109 - column vector of size 26
%       OUTPUT.x110 - column vector of size 26
%       OUTPUT.x111 - column vector of size 26
%       OUTPUT.x112 - column vector of size 26
%       OUTPUT.x113 - column vector of size 26
%       OUTPUT.x114 - column vector of size 26
%       OUTPUT.x115 - column vector of size 26
%       OUTPUT.x116 - column vector of size 26
%       OUTPUT.x117 - column vector of size 26
%       OUTPUT.x118 - column vector of size 26
%       OUTPUT.x119 - column vector of size 26
%       OUTPUT.x120 - column vector of size 26
%       OUTPUT.x121 - column vector of size 26
%       OUTPUT.x122 - column vector of size 26
%       OUTPUT.x123 - column vector of size 26
%       OUTPUT.x124 - column vector of size 26
%       OUTPUT.x125 - column vector of size 26
%       OUTPUT.x126 - column vector of size 26
%       OUTPUT.x127 - column vector of size 26
%       OUTPUT.x128 - column vector of size 26
%       OUTPUT.x129 - column vector of size 26
%       OUTPUT.x130 - column vector of size 26
%       OUTPUT.x131 - column vector of size 26
%       OUTPUT.x132 - column vector of size 26
%       OUTPUT.x133 - column vector of size 26
%       OUTPUT.x134 - column vector of size 26
%       OUTPUT.x135 - column vector of size 26
%       OUTPUT.x136 - column vector of size 26
%       OUTPUT.x137 - column vector of size 26
%       OUTPUT.x138 - column vector of size 26
%       OUTPUT.x139 - column vector of size 26
%       OUTPUT.x140 - column vector of size 26
%       OUTPUT.x141 - column vector of size 26
%       OUTPUT.x142 - column vector of size 26
%       OUTPUT.x143 - column vector of size 26
%       OUTPUT.x144 - column vector of size 26
%       OUTPUT.x145 - column vector of size 26
%       OUTPUT.x146 - column vector of size 26
%       OUTPUT.x147 - column vector of size 26
%       OUTPUT.x148 - column vector of size 26
%       OUTPUT.x149 - column vector of size 26
%       OUTPUT.x150 - column vector of size 26
%       OUTPUT.x151 - column vector of size 26
%       OUTPUT.x152 - column vector of size 26
%       OUTPUT.x153 - column vector of size 26
%       OUTPUT.x154 - column vector of size 26
%       OUTPUT.x155 - column vector of size 26
%       OUTPUT.x156 - column vector of size 26
%       OUTPUT.x157 - column vector of size 26
%       OUTPUT.x158 - column vector of size 26
%       OUTPUT.x159 - column vector of size 26
%       OUTPUT.x160 - column vector of size 26
%       OUTPUT.x161 - column vector of size 26
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
