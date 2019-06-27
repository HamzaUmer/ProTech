import java.util.Scanner;
class temperature
{
public static void main(String arg[])
{
float A;
int m[]=new int[8],a,b=m.length-1;
Scanner Sc=new Scanner(System.in);
String n[]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
for(a=0;a<b;a++)
{
System.out.println("Enter Temperature of"+n[a]);
m[a]=Sc.nextInt();
m[b]=m[b]+m[a];
}
A=(float)m[b]/7;
System.out.println("Day \t\t Temperature");
for(a=0;a<b;a++)
{
System.out.println(n[a]+"\t"+m[a]);
}
System.out.println("Average Temperature=" + A);
}
}
