
 #include<stdio.h>
 #include<conio.h>
 void main()
 {
	clrscr();
	int num;
	printf("Enter Value:- ");
		scanf("%d",&num);
	if(num%7==0)
	{
		printf("Divisble by 7");
	}
	else
	{
		printf("Not Divisble by 7");
	}
	getch();
 }