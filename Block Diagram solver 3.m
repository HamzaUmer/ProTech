s=tf('s')
g1=3/(s+2)
g2=1/(s+3)
g3=1/(s+1)
g4=3
h1=1
f1=parallel(g2,-g3)
f2=feedback(g1,h1)
f3=series(f1,f2)
f4=series(f3,g4)



