function C=czero(f,beta)
% complex zero pair for controller
% C=czero(f,beta);
s = tf('s');
w = f*2*pi;
C = s^2/w^2 + 2*beta*s/w + 1 ;

end %function