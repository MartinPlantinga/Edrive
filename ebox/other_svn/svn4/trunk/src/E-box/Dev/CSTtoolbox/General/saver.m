%SAVER   save a figure 'wysiwyg' in pdf (and optionally in eps)   
%   
%   Usage:   saver(name,fignumber,path,save_eps)
%
%   Inputs:  name:      name of the file (without extension)
%            fignumber: figure number (default: current figure)
%            path:      where to save the file (default: current dir)
%            save_eps:  [ 1 | 0 (default) ] also save as .eps file 
%   
%   Outputs: name.pdf (optionally also name.eps)
%   
%   See also SETPLOT.
   
%   Changes: 
%   20110803 - Initial version (Rob Hoogendijk)
%   20110805 - Changed check for windows/unix computer to work on linux x64 
%              as well, added default value for empty handle  (Michael
%              Ronde)
%   20110817 - Changed error to warning if chosen not to overwrite (Michael
%              Ronde)
%   
%   Rob Hoogendijk (2011-08-3)%   
%   ________________________________
%   Eindhoven University of Technology
%   Dept. of Mechanical Engineering
%   Control Systems Technology group
%   PO Box 513, WH -1.126
%   5600 MB Eindhoven, NL
%   T +31 (0)40 247 4227
%   F +31 (0)40 246 1418
%   E r.hoogendijk@tue.nl

function saver(name,handle,path) 
%settings:
preferredpath='D:\Thesis\Research\Decoupling\alpha_optimization\pics\'; %when path==0, this path is used, I always set it to the pictures folder of my current project

%use current figure if no handle is supplied 
if (nargin<2) || isempty(handle)
    handle=gcf; 
end 
%default path current dir 
if (nargin<3) 
    if(isunix)         
        path=[cd '/']; %for linux users 
    else 
        path=[cd '\']; %for windows users 
    end
else
    if path==0
    path=preferredpath;     
    end
end


% check if the file exists
if exist([path,name,'.pdf'])
   % File does exist, ask what to do
   disp(['Overwrite file ' path, name '.pdf? ']);
   R=input('[y/n]:','s');
   if(R=='n'),return; disp('Figure not saved.'); end;
end
    
% some settings, save fig
%path settings
currdir=cd;cd(path);
%background color
figure(handle);
set(handle,'color','w');
%save
export_fig([name '.pdf'],'-nocrop');
%disp success
disp(['Figure ' num2str(handle) ' stored in ' path,name '.pdf']);
%restore orig dir
cd(currdir);
end%function 

