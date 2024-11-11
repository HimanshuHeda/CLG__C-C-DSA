#include<stdio.h>
#include<conio.h>
void main()
{
float a, x;
clrscr();
do{
printf("\nVersion 1.2\n			   *** Converter by Himanshu ***\n\n");
printf("\n	To convert celcius to farenhiet, press 1\n");
printf("\n	To convert meter to foot, press 2\n");
printf("\n	To convert kilogram to pounds, press 3\n");
printf("\n	To convert GB to KB, press 4\n");
printf("\n	To convert celcius to kelvin, press 5\n");
scanf("%f",&a);
clrscr();
if(a==1)
{
printf("Enter the celcius number : \n");
scanf("%f",&x);
printf("The %f number in fahrenheit is : %f",x,x*9/5+32);
}
else if(a==2)
{
printf("Enter the length in meter : \n");
scanf("%f",&x);
printf("The %f meter in foot is : %f\n",x,(x*3.2808399));
}
else if(a==3)
{
printf("Enter the weight in gram : \n");
scanf("%f",&x);
printf("The %f kilogram in pounds is : %f\n",x,(x*2.2046226));
}
else if(a==4)
{
printf("Enter the GB size : \n");
scanf("%f",&x);
printf("The %f GB in KB is : %f\n",x,(x*1024*1024));
}
else if(a==5)
{
printf("Enter the number to convert from celcius to Kelvine");
scanf("%f",&x);
printf("The %f celcius in Kelvin is %f",x, x+273.15);
}
else if(a>=6)
{
clrscr();
printf("Wrong Selection! Please try again!");
}
}
while(a!=0);
clrscr();
printf("\n\n		Exiting the program! Hope to see you soon!\n");
getch();
}
