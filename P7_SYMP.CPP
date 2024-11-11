 // Array list in reverse order.

 #include<stdio.h>
 #include<conio.h>
 void main()
 {
	clrscr();
	int arr[10];
	printf("Enter array values:- ");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array Values are:\n");
	for(i=9;i>=0;i--)
	{
		printf("%d\n",arr[i]);
	}
	getch();
 }