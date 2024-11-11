
 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 clrscr();
 int i,j,x=1;
 for(i=0;i<5;i++)
 {
 for(j=5;j>i;j--)
 {
 printf("%d\t",x);x++;
 }
 printf("\n");
 }
 getch();
 }
 //\t for tab
 //\n for new line