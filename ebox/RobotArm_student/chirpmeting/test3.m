%clear all; 
 %close all; clc;

% Opening signal file
%load ('chirp.mat')
signal=dsp_examples_yout;

%delta f =fs/nfft
% Parameters
nfft=256;
window=hanning(nfft);
noverlap=0;
fs=4096;
% nfft = [128,256];
dt = 1/fs;
N=size(dsp_examples_yout)

time = linspace(0,(N*dt),N)';

% Time domain
figure('name','excitation signal time domain');
plot(time,signal);
axis([0 250 -2 2]);
title('Excitation signal time domain');
ylabel('Signal amplitude [N]');
xlabel('Time [s]');

%figname = sprintf('time_signal_%d',signal_nr);
% % saveas(gcf,['figures' filesep figname],'png');
% make_images(gcf,figname);
%%

% Frequency domain using pwelch

figure('name','power spectral density excit');
pwelch(signal,window,noverlap,nfft,fs);
title('Excitment signal in the frequency domain');
axis([0 0.400 -200 0])
grid on
% figname = sprintf('psd_%d',signal_nr);
% make_images(gcf,figname);
