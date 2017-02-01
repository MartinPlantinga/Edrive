function qs(varargin)

% QS  QadScope experimentation software for use with TUeDACS/1 QAD/AQI modules
%
% QS starts measuring with the default sampling rate of 4096 Hz.
%
% QS(MAXFREQ) starts with a sampling rate of MAXFREQ Hz.
%
% QS(MAXFREQ,DAC_NDOWN) starts with a sampling rate of MAXFREQ Hz and a
% down-sampled D/A-rate of MAXFREQ/(1+DAC_NDOWN) Hz.

clear mex;

maxfreq=4096;
frame_length = maxfreq;
dac_ndown=0;
netif=0;

% Override defaults by mat file created by changeeth for changing default
% netif
if (exist('eth_defaults.mat','file')==2)
    load eth_defaults.mat
end

if nargin>0
    maxfreq=varargin{1,1};
end
if nargin>1
    frame_length=varargin{1,2};
end
if nargin>2
    dac_ndown=varargin{1,3};
end
if nargin>3
    netif=varargin{1,4};
end

netif = ['eth',num2str(netif)];

%cmd=sprintf('!rxvt -title "QadScope engine" -e preempt_run_usb /usr/local/matlabr14sp2/toolbox/qadscope/qseng_usb_preempt %f %d %d &',maxfreq,dac_ndown,ical);
cmd=sprintf('!gnome-terminal -t "E-Scope engine" -e "taskset 02 /home/ebox/svn/trunk/src/E-box/Apps/E-Scope/engine/eseng %f %d %d %s " &',maxfreq,frame_length,dac_ndown,netif);
eval(cmd);

% wait some time
pause(5);

% start gui
qadscope

pause(5)
