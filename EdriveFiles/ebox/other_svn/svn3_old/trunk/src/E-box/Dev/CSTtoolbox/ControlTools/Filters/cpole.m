function C=cpole(f,beta)
% complex pole pair for controller
% C=cpole(f,beta);
s = tf('s');
w = f*2*pi;
C = 1/(s^2/w^2 + 2*beta*s/w + 1);

end %function