n=0:3;
x=[1 0 0 0 1 3 2;2 1 0 0 0 1 3;3 2 1 0 0 0 1;1 3 2 1 0 0 0;0 1 3 2 1 0 0;0 0 1 3 2 1 0;0 0 0 1 3 2 1];
y=[1;2;1;-1;0;0;0];
z=(x*y);
nz=n(1)+n(1):n(end)+n(end);
stem(nz,z);
xlabel('n');
ylabel('AMplitude');
title('Convolve wave');