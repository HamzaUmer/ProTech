fd=1/50;
n=0:499;
q=input('No. of Digits after Decimal points to be retained (0-9): ');
x=cos(2*pi*fd*n);
Px=sum(abs(x).^2)/length(x)
xq=round(x*10^q)/10^q;
xe=x-xq;
Pe=sum(abs(xe).^2)/length(xe)
SQNR=10*log10(Px/Pe)