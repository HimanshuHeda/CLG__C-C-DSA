 /* Pattern Printing.
    1
    1	2
    1	2      3
    1	2      3	4
    1	2      3	4	5
 */
 #include<stdio.h>
 #include<conio.h>
 void main()
 {
	clrscr();
	int i,j,a;
	printf("Your pattern is as below\n");
	for(i=0;i<=6;i++)
	{
		for(j=1;j<i;j++)
		{
			printf("%d\t",j);
		}
		printf("\n");
	}
	getch();
 }