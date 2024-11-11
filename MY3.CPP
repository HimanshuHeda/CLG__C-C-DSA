 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 clrscr();
 int i,j,x=1;
 for(i=0;i<5;i++)
 {
 for(j=0;j<i;j--)
 {
 printf("*");
 }
 printf("\n");
 }
 getch();
 }
