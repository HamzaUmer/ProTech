/*to find area & perimeter of both rectangle & circle*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()//main function
{
float a,b,c,d,e,f,g;
clrscr();//clear screen
printf("Enter the length,breath of rectangle & radius of a circle respectively\n");
scanf("%f%f%f",&a,&b,&c);
d=a*b;
e=2*(a+b);
f=3.14*c*c;
g=2*3.14*c;
printf("area of the rectangle =%.2f\n",d);
printf("perimeter of a rectangle =%.2f\n",e);
printf("area of circle=%.2f\n",f);
printf("perimeter of circle=%.2f\n",g);
getche();//get character without echo
}
OUTPUT:
Enter the length,breath of rectangle & radius of a circle respectively
10
8
4
area of the rectangle =80.00
perimeter of a rectangle=36.00
area of circle=50.24
perimeter of circle=25.12