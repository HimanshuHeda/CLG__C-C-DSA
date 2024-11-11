#include<stdio.h>
#include<conio.h>
void main()
{
float n=-1, av, s, a;
clrscr();
printf("\n			** Average Calculator by HIMANSHU **");
printf("\n		 	Press 0 to finish scaning inputs!!");
printf("\n\n");
do
{
printf("Enter the number : ");
scanf("%f",&a);
s+=a;
n++;
}
while (a!=0);
printf("The average of the given numbers was %f,",s/n);
getch();
}
