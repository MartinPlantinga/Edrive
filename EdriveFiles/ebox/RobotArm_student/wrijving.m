
close all
clear all

load Fv_Z20.mat


time=signals(1,:);
velR=signals(2,:);
measpos=signals(3,:);
output=signals(4,:);

figure(1)
plot(time,velR)
hold
plot(time,output,'r')
mean(output(1:28000))

figure(2)
plot(time,measpos)