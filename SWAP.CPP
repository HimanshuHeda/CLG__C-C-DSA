
 #include<stdio.h>
 #include<conio.h>
 int main()
 {
	double first, secound, temp;
	clrscr();
	printf("\n PROGRAM TO SWAP TWO NUMBERS\n\n");
	printf("Enter two numbers: ");
	scanf("%lf %if",&first, &secound);
	temp = first;
	first = secound;
	secound = temp;
	printf("%.2lf %.2lf", first, secound);
	getch();
	return 0;
 }