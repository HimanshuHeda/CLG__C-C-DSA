 /* Print 1 to 20 from for / while / Do while.
    Do While loop                                                                    */

 #include<stdio.h>
 #include<conio.h>
 void main()
 {
	clrscr();
	int a=1;
	printf("Values between 1 to 20 in assending order is :--\n");
	do
	{
		printf("%d\n",a);
		a++;
	}
	while(a<=20);
	getch();
 }