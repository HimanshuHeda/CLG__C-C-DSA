#include<stdio.h>
#include<conio.h>
void main(){
float a, x, y, s, n=-1;
clrscr();
printf("Version 1.2");
printf("\n\n\n		        ***	Calculator by Ather	***\n" );
printf("	*** To exit the calculator, just press 0 and hit enter 2 times! *** ");
printf("		      *** To Read Whats New in this version, Enter 786! ***");
do{
printf("\n\n\n	To Add Press 1			 To Subtract Press 2\n\n	To Multiply Press 3		 To Divide Press 4\n\n" );
printf("	To Calculate the area of circle, press 5\n\n");
printf("	To Calculate area of rectangle or square press 6\n\n");
printf("	To convert celcius to fahrenheit press 7\n\n");
printf("	To calculate the average, press 8\n\n");
scanf("%f",&a);
clrscr();
if (a==1){
printf("Enter the first number to add : ");
scanf("%f",&x);
printf("Enter the second number to add : ");
scanf("%f",&y);
printf("The total is : %f", x + y);
}
else if (a==2){
printf("Enter the first number to subtract : ");
scanf("%f",&x);
printf("Enter the second number to subtract : ");
scanf("%f",&y);
printf("The total is : %f", x - y);
}
else if (a==3){
printf("Enter the first number to Multiply : ");
scanf("%f",&x);
printf("Enter the second number to Multiply : ");
scanf("%f",&y);
printf("The total is : %f", x * y);
}
else if (a==786){
printf("Hello!! This is Ather Niyargar.\nIn this version(1.2), now you can calculate\nthe average without any limit of numbers!!\nEnjoy!");
}
else if (a==4){
printf("Enter the first number to Divide : ");
scanf("%f",&x);
printf("Enter the second number to Divide : ");
scanf("%f",&y);
printf("The total is : %f", x / y);
}
else if (a==5){
printf("Enter the radius of the circle : ");
scanf("%f",&x);
printf("Enter the area of the circle is : %f", x*x*3.14);
}
else if (a==6){
printf("Enter the lenght of one side : ");
scanf("%f",&x);
printf("Enter the lenght of second side : ");
scanf("%f",&y);
printf("The area of rectangle is : %f", x * y);
}
else if (a==7){
printf("Enter the Calcius Value : ");
scanf("%f",&x);
printf(" %f degree celcius in fahrenheit is : %f",x,x*9/5+32);
}
else if (a==8){
do
{
printf("Enter the number : ");
scanf("%f",&x);
s+=x;
n++;
}
while (x!=0);
printf("The average of the given numbers was %f,",s/n);
getch();
}
else if (a>=9){
printf("       \n\n\n\n	*** You Selected an invalid option! Try Again!! ***");
}
}
while (a>0);
getch();
}