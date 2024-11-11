											 /*
 find an element in array
											 */
 #include"stdio.h"
 #include"conio.h"
 void main()
 {
 clrscr();
	int n,i,ele,flag=0,a[5];
	printf("Enter Elements of array : ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter element you want to search : ");
	scanf("%d",&ele);
	for(i=0;i<5;i++)
	{
		if(ele==a[i])
		{
			flag=1;
			n=i+1;
		}
	}
	if(flag==1)
	{
		printf("Element %d found at location %d",ele,n);
	}
 getch();
 }