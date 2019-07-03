syms r e c b g h
v=solve('e=r-b','b=c*h','c=e*g',e,c,b)
a=v.c/r
pretty(a)
f=v.b/r
pretty(f)
t=v.e/r
pretty(t)


