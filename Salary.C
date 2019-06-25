/*To find ramesh's gross salary*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()//main function
{
float a,b,c,d;
clrscr();//clear screen
printf("Enter the ramesh's basic salary\n");
scanf("%f",&a);
b=(40*a)/100;
c=(20*a)/100;
d=a-(b+c);
printf("Ramesh's gross salary=%.2lf\n",d);
getche();//get character without echo
}
OUTPUT:
Enter the ramesh's basic salary
20000
Ramesh's gross salary=8000.00