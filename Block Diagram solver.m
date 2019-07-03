s=tf('s')
g=2/(s+1)
h=3/s
a=series(g,h)
b=parallel(g,h)
c=feedback(g,h)

