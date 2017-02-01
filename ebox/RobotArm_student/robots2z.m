w_int=5;     %  weak integrator cutoff frequency
w_lp1=400;   %  cutoff frequency lowpass1
w_lp2=400;   %  cutoff frequency lowpass2
B=0.7;      %  relative damping
w_lead=15;  %  zero
w_lag=200;  %  pole
Kp=1000;    %  stiffness 
Kv=300;     %  damping
Ts=1/2^12;   %  2^12=4096;




%%%%%%%%%%%%%%%       weak integrator   %%%%%%%%%%%%%%

s=tf('s');
C_int=(s+w_int)/s;
format long;
tfint=c2d(C_int,Ts);

%%%%%%%%%%%%%%%       lowpass1          %%%%%%%%%%%%%%

 s=tf('s');
 C_lp1=w_lp1/(s+w_lp1);
 format long;
 tflp1=c2d(C_lp1,Ts);
 
 %%%%%%%%%%%           lowpass2          %%%%%%%%%%%%%%

 s=tf('s');
 C_lp2=1/((s^2/w_lp2^2)+((2*B*s)/w_lp2)+1);
 format long;
 tflp2=c2d(C_lp2,Ts);
 
 %%%%%%%%%%%%%%%        leadlag filter      %%%%%%%%%%%%%%w_lag/w_lead;

s=tf('s');
C_leadlag=((s+w_lead)/(s+w_lag))*1;
format long;
tfleadlag=c2d(C_leadlag,Ts);

%%%%%%%%%%%%%%%        Pd filter      %%%%%%%%%%%%%%

% s=tf('s');
% Cpd=Kp+Kv*s;
% format long;
% tfleadlag=c2d(Cpd,1/4096);


%%%%%%%%%%%%%%%%   discreet controller  R direction %%%%%%%%%%%%%%%%%%%%%%%%
%
%    Gain 60
% 
%    Transfer function:weak integrator
%    z - 0.9988
%    ----------
%    z - 1
%   
%
% 
%    Transfer function:lowpass 2
%      0.004555 z + 0.004352
%      ----------------------
%      z^2 - 1.863 z + 0.8722
% 
% 
%     Transfer function:leadlag
%     z - 0.9964
%     ---------------
%     z - 0.9523


%%%%%%%%%%%%%%%%   discreet controller  X direction %%%%%%%%%%%%%%%%%%%%%%%%
%
%    Gain 50
% 
%    Transfer function:weak integrator
%     z - 0.9988
%     ----------
%     z - 1
%   
% 
%    Transfer function:lowpass 2
%     0.007148 z + 0.006863
%     ----------------------
%     z^2 - 1.871 z + 0.8851
% 
% 
% 
%     Transfer function:leadlag
%     9.333 z - 9.3
%     ---------------
%     z - 0.9664

%%%%%%%%%%%%%%%%   discreet controller  Z direction %%%%%%%%%%%%%%%%%%%%%%%%
%
%    Gain 110
% 
%    Transfer function:weak integrator
%     z - 0.9988
%     ----------
%     z - 1
%   
% 
%   Transfer function:lowpass 2
%     0.01021 z + 0.009719
%     ----------------------
%     z^2 - 1.844 z + 0.8637
% 
% 
%     Transfer function:leadlag
%      13.04 z - 12.97
%      ---------------
%       z - 0.9294
  