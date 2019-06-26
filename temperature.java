class temp4
{
public static void main(String arg[])
{
int t;
t=Integer.parseInt(arg[0]);
if(t<=10)
{
System.out.println("Cold weather");
}
if(t>=11&&t<=29)
{
System.out.println("Pleasant weather");
}
if(t>=30)
{
System.out.println("Warm Weather");
}
}
}
OUTPUT:
E:\jdk1.7\bin>java temp4 9
Cold weather

E:\jdk1.7\bin>java temp4 15
Pleasant weather

E:\jdk1.7\bin>java temp4 38
Warm Weather