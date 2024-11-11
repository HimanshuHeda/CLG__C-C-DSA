//Write a program to create a funtion with return type and with argument.

 #include<stdio.h>
 #include<conio.h>
 int add();
 void main()
 {
	clrscr();
	int x;
	x = add();
	printf("Sum = %d",x);
	getch();
 }
 int add()
 {
	int a,b,c;
	printf("Enter a & b ");
		scanf("%d%d",&a,&b);
	c = a+b;
	return c;
 }