#include<stdio.h>
#include<conio.h>
void main(void)//main function
{
float I,V,R;//declear variable
clrscr();//clear screen
printf("Enter value for V:");//to display value of V
scanf("%f",&V);
printf("Enter value for I:");//to display value of I
scanf("%f",&I);
R=V/I;//assign value
printf("\nR=%.2f",R);//to display div V and I
getche();//get character without echo
}
OUTPUT:
Enter value for V:12
Enter value for I:0.1
R:120.00