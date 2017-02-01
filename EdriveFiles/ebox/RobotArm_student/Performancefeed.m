function Performancefeed(filename)



eval(['load ' filename '.mat'])

n=size(out)
n=n(1,2)
 
time=out(1,:); %tijdsvector
ac=out(2,:);  % acceleration
vel=out(3,:); % velocity
pos=out(4,:); % position
feedout=out(5,:); % control feedforward

plot(time(1:n),vel(1:n))
hold
plot(time(1:n),feedout(1:n),'r')
plot(time(1:n),ac(1:n)./100,'g')


%perfR jerk 10000,acc 100,vel 6, pos 0.5  controller+feed
%perfR jerk 10000,acc 100,vel 6, pos 0.5  controller

