close all
%procedure to define frf with noise excitation  
% use of hann window

clear all

load('signalsmat.mat')
time=signal(1,:);
noise=signal(2,:);
er=signal(3,:);
ur=signal(4,:);
% vel=signals(5,:);

% load noisemeasurementx.mat
% er=e;
% ur=u;



%%
nfft=4096;
window=nfft;

%noverlap=nfft/100;
noverlap=nfft/2;
fs=4096;

% bepaal sensitivity
%%
[S,hz]=tfestimate(noise,ur,hann(window),noverlap,nfft,fs);  %resolution=0,25/fs=1000 
figure(1)
subplot(2,1,1);
amp=abs(S);
ampdb=db(amp);
semilogx(hz,ampdb);
axis([0.1 2000 -50 40]);
ylabel('magnitude [dB]')
grid
title('sensitivity')
subplot(2,1,2)
angle1=angle(S);
semilogx(hz,(angle1/pi)*180);
axis([0.1 2000 -180 180]);
xlabel( 'frequency [hz]')
ylabel('phase [deg]')
grid

%%

figure(2)
 sys = idfrd(S,(hz*2*pi),1/1000);
 bode(sys, {(0.5*2*pi) 500})
 title('sensitivity')
 grid

 

 %%
% coherence sensitivity
figure(3)
[C,hz]=mscohere(noise,ur,hann(window),noverlap,nfft,fs);
amp=abs(C);
semilogx(hz,amp);
axis([0.5 500 0 1.1]);
grid; ylabel('magnitude')
title('coherence')
xlabel('frequency [hz]')


%%

% Bepaal processensitivity
figure(4)
subplot(2,1,1)
[PS,hz]=tfestimate(noise,er,hann(window),noverlap,nfft,fs);
amp=abs(PS);
ampdb=db(amp);
semilogx(hz,ampdb);
axis([1 500 -80 50]);
ylabel('magnitude [dB]')
title('proces sensitivity')
grid
subplot(2,1,2)
angle1=angle(PS);
semilogx(hz,(angle1/pi)*180);
axis([10 500 -180 180]);grid
xlabel( 'frequency [hz]')
ylabel('phase [deg]')

%%

% coherence processensitivity
figure(5)
[Cp,hz]=mscohere(noise,er,window,noverlap,nfft,fs);
amp=abs(Cp);
semilogx(hz,amp);
axis([1 500 0 1.1]);
grid; ylabel('magnitude ')
title('coherence proces sensitivity')
xlabel('frequency [hz]')

%% determine plant
figure(6)
plant=PS./-S;
subplot(2,1,1);
hold
amp=abs(plant);
ampdb=db(amp);
semilogx(hz,ampdb);
axis([1 2000 -120 50]);
title('plant Z direcZtion fs = 4096 hz'); grid
ylabel('magnitude [dB]')
subplot(2,1,2)
hold
angle1=angle(plant);
%semilogx(hz,(angle1/pi)*180);
semilogx(hz,(unwrap(angle1)/pi)*180.-360);
axis([1 2000 -720 100]);
grid
xlabel( 'frequency [hz]')




%%

% determine phase drop bij plotting phase on lineair axis

figure(7)
plot(hz,(angle1/pi)*180)
grid
xlabel( 'frequency [hz]')
ylabel('phase [deg]')
hold
y=(300-(0.9*hz));
plot(hz,y, 'r' )

%%
figure(8)
 sysp11 = idfrd(plant,(hz*2*pi),1/1000);
 %bode([sysp11]{(1*2*pi) 500*2*pi})
 bode(sysp11, {(0.5*2*pi) 500})
 title('plant')
 grid
 
 % openloop bepalen
%% 
OL = S.^(-1) -1;
figure(9)
subplot(2,1,1);
grid on
amp=abs(OL);
ampdb=db(amp);
semilogx(hz,ampdb);
grid
axis([0.1 2000 -100 100]);
ylabel('magnitude []')
title('Openloop')
subplot(2,1,2)
grid on
angle1=angle(OL);
%semilogx(hz,(unwrap(angle1)/pi)*180);
semilogx(hz,(angle1/pi)*180);
axis([0.1 2000 -180 180]);
xlabel( 'frequency [hz]')
ylabel('phase [deg]')
grid
shg

figure(6)

% figure(200)
% 
%  sysOL = idfrd(OL,(hz*2*pi),1/4000);
%  nyquist(sysOL)