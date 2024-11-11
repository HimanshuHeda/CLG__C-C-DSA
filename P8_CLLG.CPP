
 #include<stdio.h>
 #include<conio.h>
 void main()
 {
	clrscr();
	int l,b,area,peremeter;
	printf("Enter Value of L and B:- ");
		scanf("%d%d",&l,&b);
	area=l*b;
	peremeter=2*(l+b);
	printf("\nArea of rectangle = %d",area);
	printf("\nPerementer of reatangle = %d",peremeter);
	getch();
 }