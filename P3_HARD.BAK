// for arthmatic operarations of all function.

#include<stdio.h>
#include<conio.h>
void add();
int sub();
void mul(int a, int b);
float div(float p, float q);
void main()
{
	clrscr();
	int ch;
	printf("\nEnter your choice \n\t1 for Addition \n\t2 for subtraction \n\t3 for multiplication \n\t4 for division\n");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
	{
		add();
	}
	break;

	case 2:
	{
		int x;
		x=sub();
		printf("Sub = %d",x);
	}
	break;

	case 3:
	{
	       int a,b;
	       printf("\n Enter a & b : ");
	       scanf("%d%d",&a,&b);
	       mul(a,b);
	}
	break;

	case 4:
	{
	       float p,q,divi;
	       printf("\n Enter a & b : ");
	       scanf("%f%f",&p,&q);
	       divi=div(p,q);
	       printf("div = %f",divi);
	}
	break;

	default :
	       printf("INVALID CHOICE");
}
getch();
}
	void add()
	{
		int a,b,c;
		printf("Enter a & b : ");
		scanf("%d%d",&a,&b);
		c=a+b;
		printf("Sum = %d",c);
	}
	int sub()
	{
		int a,b,c;
		printf("\nEnter a & b : ");
		scanf("%d%d",&a,&b);
		c=a-b;
		return c;
	}
	void mul(int a, int b)
	{
		int c;
		c=a*b;
		printf("mul = %d",c);
	}
	float div(float p, float q)
	{
		float r;
		r=p/q;
		return r;
	}
