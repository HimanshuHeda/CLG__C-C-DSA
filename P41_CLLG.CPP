 // Swap two numbers.

 #include<stdio.h>
 #include<conio.h>
 void main()
 {
	clrscr();
	int a,b,c;
	printf("Enter A:- ");
		scanf("%d",&a);
	printf("Enter B:- ");
		scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("After swapping, A=%d\n",a);
	printf("After swapping, B=%d",b);
	getch();
 }