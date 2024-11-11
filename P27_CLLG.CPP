
 #include<stdio.h>
 #include<conio.h>
 void main()
 {
	clrscr();
	int r,c;
	for(r=0;r<=20;r++)
	{
			for(c=0;c<=r;c++)
			{
			printf("*");
			}
	printf("\n");
	}
	getch();
 }