%CALCCL compute mimo transfer functions with minimal realization 
%   
%   Usage:   sys=calcCL(H,C,whichClosedLoop)          
% 
%   Inputs:  H               : Plant 
%            C               : Controller 
%            whichClosedLoop : 'S' or 'So'  for Output Sensitivity
%                              'Si'         for Input Sensitivity
%                              'T'          for Complementary Sensitivity
%                              'Ti'         for Input Complementary Sensitivity
%                              'PS'         for Process Sensitivity
%                              'CS'         for Controller Sensitivity
%   
%   Outputs: the desired closed loop transfer function as specified in
%            whichClosedLoop
%   
%   See also 

%   References: -
%   
%   Changes: 
%   20121015 - Initial version (Rob Hoogendijk) 
%   
%   
%   Rob Hoogendijk (2012-10-15) 
%   ________________________________
%   Eindhoven University of Technology
%   Dept. of Mechanical Engineering
%   Control Systems Technology group
%   PO Box 513, WH -1.126
%   5600 MB Eindhoven, NL
%   T +31 (0)40 247 4227
%   F +31 (0)40 246 1418
%   E r.hoogendijk@tue.nl

function sys=calcCL(H,C,whichClosedLoop) 
%at plant output (default case)
L=H*C; 
I=eye(size(L)); 
 
%at plant input: 
Li=C*H; 
Ii=eye(size(Li)); 
 
switch whichClosedLoop 
    case 'S','So' %output sensitivity 
        sys = feedback(I,L); 
    case 'Si' 
        sys = feedback(I,Li); 
    case 'T' 
        sys = feedback(L,I); 
    case 'Ti' 
        sys = feedback(Li,Ii); 
    case 'PS' 
        sys = feedback(H,C); 
    case 'CS'  
        sys = feedback(C,H); 
    otherwise 
        error('Invalid third input to calcCL'); 
end 
