 // Compare 3 numbers.

 #include<stdio.h>
 #include<conio.h>
 void main()
 {
	clrscr();
	int a,b,c;
	printf("Enter 3 values");
		scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
		printf("%d is greater",a);
	else if(b>a&&b>c)
		printf("%d is greater",b);
	else
		printf("%d is greater",c);
	getch();
 }