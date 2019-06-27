import java.util.Scanner;
class sort2
{
public static void main(String arg[])
{
float a,m[]=new float[5];
int b,c,d,e;
c=m.length-1;
Scanner Sc=new Scanner(System.in);
for(e=0;e<=c;e++)
{
System.out.println("Enter Number "+e);
m[e]=Sc.nextFloat();
}
for(d=0;d<c;d++)
{
for(b=d+1;b<=c;b++)
{
if(m[d]>m[b])
{
a=m[d];
m[d]=m[b];
m[b]=a;
}
}
}
for(d=0;d<=c;d++)
{
System.out.println(m[d]);
}
}
}