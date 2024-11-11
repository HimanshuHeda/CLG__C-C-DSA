																				/*
 Sum of 2 array
											 */
 #include"stdio.h"
 #include"conio.h"
 void main()
 {
 clrscr();
	int a[5],b[5],c[5],i;
	printf("Enter First Elements of array : \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter Secound Elements of array : \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<5;i++)
	{
		c[i]=a[i]+b[i];
		printf("%d\n",c[i]);
	}
 getch();
 }