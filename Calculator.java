class calc1
{
public static void main(String arg[])
{
int a,b;
char c;
a=Integer.parseInt(arg[0]);
b=Integer.parseInt(arg[1]);
c=arg[2].charAt(0);
switch(c)
{
case '+':
System.out.println(a+"+"+b+"="+(a+b));
break;
case '-':
System.out.println(a+"-"+b+"="+(a-b));
break;
case 'x':
System.out.println(a+"x"+b+"="+(a*b));
break;
case '/':
System.out.println(a+"/"+b+"="+(float)a/b);
break;
default:
System.out.println("Invalid operator");
}
}
}