
 #include<stdio.h>
 #include<conio.h>
 void main()
 {
	clrscr();
	int days;
	printf("Enter no. of days");
	scanf("%d",&days);
	if(days>=30)
	{
		if(days==31)
		printf("Month may be \n Jan,\n Mar,\n May,\n Jul,\n Aug,\n Oct,\n Dec\n");
		else if(days==30)
		printf("Months may be \n Apr,\n Jun,\n Sept,\n Nov\n");
		else
		printf("You are on the wrong place.. thank you.....");
	}
	else
	{
		if(days==28||days==29)
		printf("Month= Feb");
		else
		printf("You try your best.... now try again");
	}
	getch();
 }