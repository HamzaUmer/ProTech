function [ x ] = flipadv( u,s )
%UNTITLED2 Summary of this function goes here
%   Detailed explanation goes here
n=-10:10;
y=fliplr(x)
n1=-fliplr(n)
subplot(3,1,1)
stem(n1,u)
title('orignal')
xlabel('time')
ylabel('amplitude')
subplot(3,1,2)
stem(n1,y)
title('flipped')
xlabel('time')
ylabel('amplitude')
n2=n1-s
subplot(3,1,3)
stem(n2,y)
title('fliped and advance')
xlabel('time')
ylabel('amplitude')
end
