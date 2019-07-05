#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)//main function
{
double c,a,b,x,y;//declear variable
clrscr();//clear screen
printf("Enter the value of a:");//to display value of a
scanf("%lf",&a);
printf("Enter power x:");//to display power
scanf("%lf",&x);
printf("a:(%.2lf,%.2lf),%.2lf\n",a,x,pow(a,x));//to display value of a^x
printf("Enter the value of b:");//to display value of b
scanf("%lf",&b);
printf("Enter power y:");//to display power
scanf("%lf",&y);
printf("b:(%.2lf,%.2lf),%.2lf\n",b,y,pow(b,y));//to diplay value of b^y
c=pow(a,x)+pow(b,y);//assign value
printf("\nc^2=%.2lf",c);//to display add of b and a
getche();//get character without echo
}
OUTPUT:
Enter the value of a:4
Enter power x:2
a:(4.00,2.00),16.00
Enter the value of b:5
Enter power y:2
b:(5.00,2.00),25.00
c^2=41.00