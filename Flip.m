n=-3:3;
y1=(n>0)
subplot(2,1,1)
stem(n,y1)
y=fliplr(n-2)
subplot(2,1,2)
stem(n,y)
