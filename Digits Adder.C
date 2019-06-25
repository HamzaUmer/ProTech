/* This program takes a five-digit integer from user, seprates its digits, adds them
and then shows results.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)//main function
{
int value,dig1,dig2,dig3,dig4,dig5,sum;
clrscr();//clear screen
printf("\n   Please enter a five-digit number: ");
scanf("%d",&value);
dig1 = value %10;
value = value/10;
dig2 = value % 10;
value = value / 10;
dig3 = value % 10;
value = value / 10;
dig4 = value % 10;
value = value / 10;
dig5 = value % 10;
sum = dig1+dig2+dig3+dig4+dig5 ;
printf("\n   Solution: ");
printf("\n   __________");
printf("\n\n   %d + %d + %d + %d + %d = %d",dig5, dig4, dig3, dig2, dig1, sum );
getche();//get character without echo
}
OUTPUT:
Please enter a five-digit number:10905
Solution:
 ____________

1+0+9+0+5=15
   