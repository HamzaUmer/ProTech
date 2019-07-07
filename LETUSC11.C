#include <stdio.h>
#include<conio.h>
#include<math.h>
void main(void)//main function
{
int amount;
clrscr();//clear screen
printf("Enter the amount to be withdrawn (in hundreds): ");
scanf("%d",&amount);
printf("\n\nRequired notes of Rs. 100  :  %d", amount / 100);
printf("\n\nRequired notes of Rs. 50   :  %d", (amount % 100) / 50);
printf("\n\nRequired notes of Rs. 10   :  %d", (((amount % 100) % 50) / 10));
printf("\n\nAmount still remaining Rs. :  %d", (((amount % 100) % 50) % 10));
getch();//get character without echo
}
OUTPUT:
Enter the amount to be withdrawn (in hundreds): 556
Required notes of Rs. 100  : 5
Required notes of Rs. 50   : 1
Required notes of Rs. 10   : 0
nAmount still remaining Rs.: 6