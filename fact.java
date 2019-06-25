class fact
{
public static void main(String arg[])
{
int a,b,c=1;
b=Integer.parseInt(arg[0]);
for(a=b;a>=2;a--)
{
c=c*a;
}
System.out.println("Factorial of " + b + "is" + c);
}
}
OUTPUT:
E:\jdk1.7\bin>java fact 5
Factorial of 5is120