																/*
 Greatest among all                                                                                             */

 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 clrscr();
	int a[5],i,n;
	printf("Enter Elements of array : \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[0]<a[i])
		{
			a[0]=a[i];
			n=i+1;
		}
	}
	printf("Greatest no. is %d\n",a[0]);
	printf("No. found at location %d",n);
 getch();
 }