										     /*
 Mul of Matrix :--
										     */
 #include"stdio.h"
 #include"conio.h"
 void main()
 {
 clrscr();
	int a[3][3],b[3][3],c[3][3],i,j,k;
	printf("Enter the values of Matrix A : -- \n");
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
				scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the values of Matrix B : -- \n");
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
				scanf("%d",&b[i][j]);
		}
	}
	printf("Matrix A : -- \n");
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
	}
	printf("Matrix B : -- \n");
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d\t",b[i][j]);
			}
			printf("\n");
		}
	}
	printf("Mul of Matrix : -- \n");
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				for(k=0;k<3;k++)
				{
					c[i][j]=0;
					c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
				}
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
	}
 getch();
 }
