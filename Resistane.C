#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)//main function
{
double R,R1,R2,R3;//declear variable
clrscr();//clear screen
printf("Enter the value of R1:");//to display value of R1
scanf("%lf",&R1);
printf("Enter the value of R2:");//to display value of R2
scanf("%lf",&R2);
printf("Enter the value of R3:");//to display value of R3
scanf("%lf",&R3);
R=R1+R2+R3;//assign value
printf("\nR=%.2lf",R);//to display addition of R1,R2 & R3
getche();//get character without echo
}
OUTPUT:
Enter the value of R1:12
Enter the value of R2:18
Enter the value of R3:24
R:54.00