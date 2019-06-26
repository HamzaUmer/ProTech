import java.util.Scanner;
class lrq
{
public static void main(String arg[])
{
int a,b,c,m[]={44,31,98,102,78};
c=m.length-1;
for(b=1;b<=c;b++)
{
if(m[0]<m[b])
{
a=m[0];
m[0]=m[b];
m[b]=a;
}
}
System.out.println("Largest number of list="+m[0]);
}
}