
 #include<stdio.h>
 #include<conio.h>
 void main()
 {
	clrscr();
	int ch;
	float a,b,add,sub,mul,div;
	printf("Enter two values of a and b: ");
		scanf("%f%f",&a,&b);
	printf("\nEnter the operation you want to perform \n\t1.for Addition \n\t2.for Substraction \n\t3.for Multiplication \n\t4.for Division\n");
		scanf("%d",&ch);
	switch(ch)
	{
	case 1:
		add=a+b;
		printf("\nResult of Addition is: %f",add);
	break;

	case 2:
		sub=a-b;
		printf("\nResult of Substraction is: %f",sub);
	break;

	case 3:
		mul=a*b;
		printf("\nResult of Multiplication is: %f",mul);
	break;

	case 4:
		div=a/b;
		printf("\nResult of Division is: %f",div);
	break;

	default:
		printf("\nInvalid Choice");
	}
	getch();
 }