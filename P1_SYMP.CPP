 // Weather the number is even or odd.

 #include<stdio.h>
 #include<conio.h>
 void main()
 {
	clrscr();
	int a;
	printf("Enter value:- ");
		scanf("%d",&a);
	if(a%2==0)
		printf("The number is even");
	else
		printf("The number is odd");
	getch();
 }