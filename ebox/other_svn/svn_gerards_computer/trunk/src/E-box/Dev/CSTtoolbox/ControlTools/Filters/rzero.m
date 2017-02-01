function C=rzero(f)
% transfer function with a real pole, gain 1 at low frequencies
% note that the zero is not actually at s=i*f but on the im axis at s=-f
% C=rzero(f);
s=tf('s');
w=f*2*pi;
C=(s/w+1);
end %function