class Quad5
{
public static void main(String arg[])
{
int a,b,c,d;
float x,y;
a=Integer.parseInt(arg[0]);
b=Integer.parseInt(arg[1]);
c=Integer.parseInt(arg[2]);
d=b*b-4*a*c;
if(d>0)
{
x=(float)(-b+Math.sqrt(d))/(2*a);
y=(float)(-b-Math.sqrt(d))/(2*a);
System.out.print("x="+x +"\n y="+y);
}
else
{
System.out.println("x="+(-b)+(char)241+"i"+Math.sqrt(d*-1)+"/"+2*a);
}
}
}
OUTPUT:
E:\jdk1.7\bin>java Quad5 1 1 1
x=-1±i1.7320508075688772/2

E:\jdk1.7\bin>java Quad5 1 3 1
x=-0.38196602
 y=-2.618034