fd=1/50;
n=0:199;
q=4;
x=cos(2*pi*fd*n);
subplot(2,3,1)
stem(n,x)
title('Original Signal')
Px=sum(abs(x).^2)/length(x)
xq=fix(x*10^q)/10^q;
xe=x-xq;
Pe=sum(abs(xe).^2)/length(xe)
SQNR=10*log10(Px/Pe)
subplot(2,3,2)
stem(n,xe)
title('Error Signal')
subplot(2,3,3)
stem(n,xq)
title('Truncation')
q1=6;
xq1=round(x*10^q1)/10^q1;
subplot(2,3,4)
stem(n,xq1)
title('Round off to 64 ')
q2=7;
xq2=round(x*10^q2)/10^q2;
subplot(2,3,5)
stem(n,xq2)
title('Round off to 128 ')
q3=8;
xq3=round(x*10^q3)/10^q3;
subplot(2,3,6)
stem(n,xq3)
title('Round off to 256 ')
