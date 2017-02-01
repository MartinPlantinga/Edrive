clear all
close all
figure(1)
load R2meas.mat
plot(signals(1,:),signals(2,:),'b')
hold
plot(signals(1,:),signals(3,:),'r')
title(' R')
figure(2)
load Z2meas.mat
plot(signals(1,:),signals(2,:),'b')
hold
plot(signals(1,:),signals(3,:),'r')
title(' Z')
figure(3)
load X2meas.mat
plot(signals(1,:),signals(2,:),'b')
hold
plot(signals(1,:),signals(3,:),'r')
title(' X')