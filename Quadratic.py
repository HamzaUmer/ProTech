import cmath

a = float(input('Enter a: '))
b = float(input('Enter b: '))
c = float(input('Enter c: '))
d= (b**2)-(4*a*c)
x1=(-b-cmath.sqrt(d))/(2*a)
x2=(-b+cmath.sqrt(d))/(2*a)

print('The answers are {0} and {1}'.format(x1, x2))
