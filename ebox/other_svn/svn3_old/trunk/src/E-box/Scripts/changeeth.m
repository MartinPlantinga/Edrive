% % Filename: changeeth.m
%
% Abstract: Script to change eth settings for EtherCAT
%
% Usage: changeeth(1) to use eth1 etc
%
% Michael Ronde 
% (2012-01-11) 

% Changes:
% 20120111 - Intitial version 
% 20120111 - Added check on file existence
% ________________________________ 
% Eindhoven University of Technology 
% Dept. of Mechanical Engineering 
% Control Systems Technology group 
% PO Box 513, WH -1.127 
% 5600 MB Eindhoven, NL 
% T +31 (0)40 247 2798 
% F +31 (0)40 246 1418 
% E m.j.c.ronde@tue.nl 

function changeeth(netif)

if ~isnumeric(netif)
    disp('netif must be numeric')
    return
end

cd /home/ebox/svn/trunk/src/E-box/Scripts/
save('eth_defaults','netif')

% cd /home/ebox/svn/trunk/src/E-box/Templates/Generic/
if (exist('ebox.mdl','file') == 4)
    ectarget_settings('ebox.mdl',netif)
end
% cd /home/ebox/svn/trunk/src/E-box/Templates/Specific/pato/
if (exist('pato01.mdl','file') == 4 )
    ectarget_settings('pato01.mdl',netif)
end

% cd /home/ebox/svn/trunk/src/E-box/Templates/Specific/printer/
if (exist('printer01.mdl','file') == 4 )
    ectarget_settings('printer01.mdl',netif)
end

% cd /home/ebox/svn/trunk/src/E-box/Templates/Specific/twin/
if (exist('twin01.mdl','file') == 4 )
    ectarget_settings('twin01.mdl',netif)
end

if (exist('twin01_mimofrf.mdl','file') == 4 )
    ectarget_settings('twin01_mimofrf.mdl',netif)
end 

cd /home/ebox/svn/trunk/src/E-box/

eval(['!sudo ethtool -C eth',num2str(netif),' rx-usecs 0 rx-frames 1 tx-usecs 0 tx-frames 1'])

