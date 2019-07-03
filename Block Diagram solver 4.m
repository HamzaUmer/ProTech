syms r e b c h1 g1 g2 s d
v=solve('e=r-b','d=r*g2','s=g1*e',b=s*h1’,’c=d+s’,e,d,s,b,c)
a=v.c/r
pretty(a)




