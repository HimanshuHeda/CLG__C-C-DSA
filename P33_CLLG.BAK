
#include<stdio.h>
#include<conio.h>
void add();
int sub();
void mul(int a,int b);
float div(float p, float q);
void main()
{
	clrscr();
	int x;
	printf("Welcome to My Project");
	printf("\n\n 1st is to Add");
	printf("\n 2nd is to Sub");
	printf("\n 3rd is to Mul");
	printf("\n 4th is to Div\n");
	printf("\nPress any word to continue\n");
		scanf("%d",&x);
	clrscr();
	{
	add();
	}
		{
		int x;
		x=sub();
		printf("\nSub = %d\n",x);
		}
			{
			int a,b;
			printf("\n Enter a & b : \n");
				scanf("%d%d",&a,&b);
			mul(a,b);
			}
				{
				float p,q,divi;
				printf("\n Enter a & b : \n");
					scanf("%f%f",&p,&q);
				divi=div(p,q);
				printf("\nDiv = %f\n",divi);
				}
	getch();
}
	void add()
	{
		int a,b;
		printf("\nEnter a & b : \n");
			scanf("%d%d",&a,&b);
		printf("\nSum of a & b = %d\n",a+b);
	}
	int sub()
	{
		int a,b;
		printf("\n Enter a & b : \n");
			scanf("%d%d",&a,&b);
		return a-b;
	}
	void mul(int a,int b)
	{
		printf("\nMul = %d\n",a*b);
	}
	float div(float p,float q)
	{
		float r;
		r=p/q;
		return r;
	}
