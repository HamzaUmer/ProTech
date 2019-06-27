import java.util.Scanner;
class sort3
{
public static void main(String arg[])
{
Scanner Sc=new Scanner(System.in);
int r[]=new int[5],m[]=new int[5],s[]=new int[5],a,b,c,d;
c=r.length-1;
for(a=0;a<=c;a++)
{
System.out.println("Enter Roll no ");
r[a]=Sc.nextInt();
System.out.println("Enter Marks ");
m[a]=Sc.nextInt();
System.out.println("Enter Semester ");
s[a]=Sc.nextInt();
}
for(a=0;a<c;a++)
{
for(b=a+1;b<=c;b++)
{
if(m[a]<m[b])
{
d=m[a];
m[a]=m[b];
m[b]=d;
d=r[a];
r[a]=r[b];
r[b]=d;
d=s[a];
s[a]=s[b];
s[b]=d;
}
}
}
System.out.println("Roll no \t\t Marks \t\t Semester");
for(a=0;a<=c;a++)
{
System.out.println(r[a]+"\t\t"+m[a]+"\t\t"+s[a]);
}
}
}