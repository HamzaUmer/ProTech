function[x]= fliipadv(u,s)
n=-10:10;
u=input('enter signal= ');
s=input('enter sample= ')
x=fliplr(u)
n1=-fliplr(n)
subplot(3,1,1)
stem(n,u)
title('orignal signal')
subplot(3,1,2)
stem(n1,x)
title('Time Reversal')
n2=n+x+10;
subplot(3,1,3)
stem(n2,x)
title('EVen Signal')
end

