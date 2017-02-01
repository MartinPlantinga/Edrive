function Clp=highpass(cutoff,beta);
%lowpass filter Clp=highpass(cutoff,beta);
s=tf('s');
w=cutoff*2*pi;
Clp=(s^2)/(s^2 + 2*beta*s*w + w^2);
end %function