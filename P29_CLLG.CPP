//Write a program to create a funtion with return type and with argument.

 #include<stdio.h>
 #include<conio.h>
 void add();
 void main()
 {
	clrscr();
		add();
	getch();
 }
 void add()
 {
	int a,b;
	printf("Enter a & b ");
		scanf("%d%d",&a,&b);
	printf("Sum of a & b: %d",a+b);
 }