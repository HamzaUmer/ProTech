#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)//main function
{
double A,b,h,num;//declear variable
clrscr();//clear screen
printf("Enter value of b:");//to display value of b
scanf("%lf",&b);
printf("Enter value of h:");//to display value of h
scanf("%lf",&h);
printf("Enter value of num:");//to display value of num
scanf("%lf",&num);
A=b*h/num;//assign value
printf("\nA=%.2lf",A);//to display total calculations
getche();//get character without echo
}
OUTPUT:
Enter value of b=34
Enter value of h=12
Enter value of num=2
A=204.00