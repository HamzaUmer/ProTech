#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(void)
{
int menu,h,CFP,CAG,BEE,PST,PHY;
float a,b,c=1,sum,sub,mul,div,per,i,j,k,l,sin_value,cos_value,tan_value,log_value,exp_value;
clrscr();
printf("Enter numbers of menu 1-11\n");
scanf("%d",&menu);
switch(menu)
{
case 1:
printf("Enter number for sum:");//to display number for sum
scanf("%f",&a);
printf("Enter number for sub:");//to display number for  sub
scanf("%f",&b);
sum=a+b;//assign value
sub=a-b;//assign value
printf("\nsum=%.2f",sum);//to display sum of a+b
printf("\nsub=%.2f",sub);//to display sum of a-b
break;
case 2:
printf("\t\t   Marks Sheet");
printf("\n\t\t==========");
printf("\nName         :Mirza Hamza Umer");
printf("\nFather Name  :Mirza Khalid Arshad Baig");
printf("\nForm No.     :07564");
printf("\nAdress       :R-923 BlOCK 15 F.B AREA KARACHI");
printf("\nUniversity   :Sir Syed University Of Engineering And Technology");
printf("\nCF&P Marks: ");
scanf("%d",&CFP);
printf("BEE Marks: ");
scanf("%d",&BEE);
printf("Phy Marks: ");
scanf("%d",&PHY);
printf("Calculus Marks: ");
scanf("%d",&CAG);
printf("Pak.st Marks: ");
scanf("%d",&PST);
printf("________________________________________________________");
printf("\nSubjects   |	Total Marks  |     Marks Obtained      |");
printf("\n___________|_______________|_________________________|");
printf("\nCF& P      |       100     |        %d               |",CFP);
printf("\nB.E.E      |       100     |        %d               |",BEE);
printf("\nPhysics    |       100     |        %d               |",PHY);
printf("\nCalculus   |       100     |        %d               |",CAG);
printf("\nPak.Studies|       100     |        %d               |",PST);
printf("\n______________________________________________________");
sum=BEE+CAG+CFP+PST+PHY;
per=(sum*100)/500;
printf("\n\nTotal Marks      : %.2f/500",sum);
printf("\nPercentage       : %.2f\n",per);
if(per>=80.00)
printf("Grade\t\t : A+");
else
printf("Sorry Not A+");
break;
case 3:
printf("b:\n");
scanf("%f",&b);
for(a=1;a<=b;a++)
 {
 c=c*a;
 printf("factorial of %.2f is %.2f\n",a,c);
 }
break;
case 4:
printf("b:\n");
scanf("%f",&b);
for(a=1;a<=b;a++)
{
c=1/(c*a);
printf("factorial of %.2f is %.2f\n",a,c);
}
break;
case 5:
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
break;
case 6:
printf("i:");
scanf("%f",&i);
printf("j:");
scanf("%f",&j);
printf("k:");
scanf("%f",&k);
printf("l:");
scanf("%f",&l);
sin_value=sin(i);
cos_value=cos(j);
log_value=log(k);
exp_value=exp(k);
tan_value=tan(l);
printf("The value of sin(%.2f):%.2f\n",i,sin_value);
printf("The value of cos(%.2f):%.2f\n",j,cos_value);
printf("The value of log(%.2f):%.2f\n",k,log_value);
printf("The value of exp(%.2f):%.2f\n",k,exp_value);
printf("The value of tan(%.2f):%.2f\n",l,tan_value);
break;
case 7:
for(h=1;h<=10;h++)
 {
 printf("\n2 * %d = %d\t 3 * %d = %d",h,2*h,h,3*h);
 }
break;
case 8:
for(h=1;h<=20;h+=2)
{
printf("\n%d",h);
}
break;
case 9:
for(h=2;h<=20;h+=2)
{
printf("\n%d",h);
}
break;
case 10:
h=1;
while(h<=10)
{
printf("\n%d MIRZA HAMZA UMER",h);
h++;
}
break;
case 11:
printf("sunday\n");
printf("monday\n");
printf("tuesday\n");
printf("wednesday\n");
printf("thursday\n");
printf("friday\n");
printf("saturday\n");
break;
default:
printf("Invalid menu number\n");
}
getch();
}