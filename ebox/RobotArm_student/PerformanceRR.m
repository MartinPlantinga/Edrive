function PerformanceR(filename)



eval(['load ' filename '.mat'])

n=size(signals)
n=n(1,2)
 
time=signals(1,:); %tijdsvector
pos=signals(2,:);  % reference
measpos=signals(3,:); % measured value
error=signals(4,:); % error
%output=signals(5,:); % control output

plot(time(1:n),pos(1:n))
hold
plot(time(1:n),measpos(1:n),'r')
figure
plot(time(1:n),error(1:n),'r')


%perfR jerk 10000,acc 100,vel 6, pos 0.5  controller+feed
%perfR jerk 10000,acc 100,vel 6, pos 0.5  controller

