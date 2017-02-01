function C=rpole(f)
% transfer function with a real pole, gain 1 at low frequencies
% note that the pole is not actually at s=i*f but on the im axis at s=-f
% C=rpole(f);
s = tf('s');
w = f*2*pi;
C = 1/(s/w+1);
end %function