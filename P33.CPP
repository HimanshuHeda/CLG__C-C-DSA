
#include<stdio.h>
#include<conio.h>
void add();
int sub();
void mul(int a,int b);
float div(float p,float q);
void main()
{
    clrscr();
    int ch;
    printf("\nEnter the operation you want to perform \n\t1.for Addition \n\t2.for Substraction \n\t3.for Multiplication \n\t4.for Division\n");
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
		printf("\nenter a&b :");
			scanf("%d%d",&a,&b);
		mul(a,b);
		}
		break;

			case 4:
			{
			float p,q,divi;
			printf("\nEnter a & b:");
				scanf("%f%f",&p,&q);
			divi=div(p,q);
			printf("div=%f",divi);
			}
			break;

				default:
				printf("INVALID CHOICE");
    }
    getch();
    }
    void add()
    {
	int a,b,c;
	printf("enter a&b");
		scanf("%d%d",&a,&b);
	printf("sum of a&b=%d",a+b);
    }
    int sub()
    {
	int a,b;
	printf("\nEnter a&b:");
		scanf("%d%d",&a,&b);
	return a-b;
     }
     void mul(int a,int b)
     {
	printf("mul=%d",a*b);
     }
     float div(float p,float q)
     {
	float r;
	r=p/q;
	return r;
     }
