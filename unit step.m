a=1;
f=2;
t=-1:1/10:10/f;
unitstep=t>=0;
u1=unitstep.*(t+1);
plot(t,u1)