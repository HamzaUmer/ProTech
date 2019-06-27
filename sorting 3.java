import java.util.Scanner;
class sort1
{
public static void main(String arg[])
{
int a,b,c,d,m[]={44,31,98,102,78};
c=m.length-1;
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
for(a=0;a<=c;a++)
{
System.out.println(m[a]);
}
}
}