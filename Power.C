#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)//main function
{
double P,I,E;//declear variable
clrscr();//clear screen
printf("Enter the value of I:");//to display value of I
scanf("%lf",&I);
printf("Enter the value of E:");//to display value of E
scanf("%lf",&E);
P=I*E;//assign value
printf("\nP=%.2lf",P);//to display addition of R1,R2 & R3
getche();//get character without echo
}
OUTPUT:
Enter the value of I:12
Enter the value of E:40
P:480.00