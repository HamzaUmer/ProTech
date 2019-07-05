void main(void)//main function
{
float a,b,mul,div,per;//declear variable
clrscr();//clear screen
printf("Enter number for mul:");//to display num for mul
scanf("%f",&a);
printf("Enter number for div:");//to display num for div
scanf("%f",&b);
mul=a*b;//assign value
div=a/b;//assign value
per=(mul+div)*100.0/300.0;//assign value
printf("\nmul=%.2f",mul);//to display a mul b
printf("\ndiv=%.2f",div);//to display a div b
printf("\nper=%.2f",per);//to display percentage
getche();//get character without echo
}
OUTPUT:
Enter num for mul:20
Enter num for div:12
mul=240.00
div=1.67
per=80.56