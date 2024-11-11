#include<stdio.h>
#include<conio.h>
void inter();
void intra();
void ihelp();
void main()
{
clrscr();
int a, i;
do
{
clrscr();
printf("Version 1.0\n\t\t\t*** GST Calculator by Ather ***");
printf("\n\t\t\t\t*** WARNING! ***\n\t*Do not enter any LETTER and SYMBOL or the program will crash!*");
printf("\n\t\t     *** To know about GST, enter 786 ***\n");
printf("\t\t   *** To Start the Calculator, press 1 ***\n");
printf("\t\t *** To exit the GST Calculator, press 0 ***\n");
scanf("%d",&a);
if(a==786)
{
clrscr();
printf("\nGoods and Service Tax was implimented on 1st July 2017.\nIt replaced Services Tax, Entertainment Tax, Custome Duty and VAT Tax.\nIt is divided into 4 categories:-\n\n1)CGST\n2)SGST\n3)IGST\n4)UTGST\n\n\n\n\n\t\t\t*Press any key to continue*");
getch();
}
else if(a==1)
{
do
{
clrscr();
printf("\nDon't Know which category to choose? Enter 786 for HELP!\n\nPlease select the type oftransportation\n\nTo go back to the main manu, Press 0!\n\n\t1)Intra-State\t\t2)Inter-State\n");
scanf("%d",&i);
		if(i==1)
		{
		clrscr();
		inter();
		getch();
		}
		else if(i==2)
		{
		clrscr();
		intra();
		}
		else if(i==786)
		{
		ihelp();
		}
		else if(i>2)
		{
		clrscr();
		printf("\n\n\n\n\n\n\n\n\n\t\t      Invalid Option Selected! Try Again!");
		getch();
		}
		else
		{
		}
	}
	while(i!=0);
}
}
while(a!=0);
clrscr();
printf("\n\t\tExiting the program! Hope to see you soon!!");
getch();
}
void inter()
{
	int a;
	float x;
	printf("Enter the price of item : ");
	scanf("%f",&x);
	printf("\nNot sure about the tax? Enter 786 for help!");
	printf("\n\nSelect the Percentage of Tax to be implimented\n\n1) 5%\t\n2) 12%\t\n3) 18%\t\n4) 28%\n");
	scanf("%d",&a);
	clrscr();
	if(a==1)
	{
	printf("The GST Tax to be paid is %f",x*5/100);
	printf("\n\tState GST\t\tCentral GST\n\t%f\t\t%f\n",x*5/200,x*5/200);
	}
	else if(a==2)
	{
	printf("The GST Tax to be paid is %f",x*12/100);
	printf("\n\tState GST\t\tCentral GST\n\t%f\t\t%f\n",x*12/200,x*12/200);
	}
	else if(a==3)
	{
	printf("The GST Tax to be paid is %f",x*18/100);
	printf("\n\tState GST\t\tCentral GST\n\t%f\t\t%f\n",x*18/200,x*18/200);
	}
	else if(a==4)
	{
	printf("The GST Tax to be paid is %f",x*28/100);
	printf("\n\tState GST\t\tCentral GST\n\t%f\t\t%f\n",x*28/200,x*28/200);
	}
	else if(a==786)
	{
	clrscr();
	printf("\n(0%) :- Milk, Plastic Bangles, Eggs, Curd, NewsPaper, Open flour, Jaggery,\nElectricity Bill, Gram Flour, Bread, Paapad, Oats, Rice, Fresh Vegetable, Salt, etc.");
	printf("\n\n(5%) :- Pasteurized Milk, Packed Paneer, Tea, Coal, Bio-Gas, Branded Wheat,\nBranded Rice, Branded Corn, Milk Powder, Raisins, LPG, etc.");
	printf("\n\n(12%) :- Butter, Paneer, Fruits, Nuts, Computer, Ghee, LED Lamp, Comb, Cards,\nCarrom Board, Toys, Electric Vehicles, etc.");
	printf("\n\n(18%) :- Tendu Leaves, Vegetable Waxes, Pasta, Macaroni, Noodles, Cord Flakes,\nBiscuits, Pastry, Cack, Ice-Cream, Mineral Water, Soap, Petroleum Jelly, Tubes\nand Pipes, etc.");
	printf("\n\n(28%) :- Chewing Gum, Bubble Gum, Chocolate, Cocoa Butter, Cocoa Powder,\nMarble Stone, Perfume, Shampoo, Hair Colours, Wash Basin, Mirror, Razor,\nRefrigerator, A.C., Vacuume Pipes, etc.");
	getch();
	}
	else
	{
	printf("Invalid Option Selected");
	}
	printf("\n\n\n\n\n\t\t\t*Press any key to continue*");
	}
void intra()
{
	int a;
	float x;
	printf("Enter the price of item : ");
	scanf("%f",&x);
	printf("\nNot sure about the tax? Enter 786 for help!");
	printf("\n\nSelect the Percentage of Tax to be implimented\n\n1) 5%\t\n2) 12%\t\n3) 18%\t\n4) 28%\n");
	scanf("%d",&a);
	clrscr();
	if(a==1)
	{
	printf("The IGST Tax to be paid is %f",x*5/100);
	}
	else if(a==2)
	{
	printf("The IGST Tax to be paid is %f",x*12/100);
	}
	else if(a==3)
	{
	printf("The IGST Tax to be paid is %f",x*18/100);
	}
	else if(a==4)
	{
	printf("The IGST Tax to be paid is %f",x*28/100);
	}
	else if(a==786)
	{
	clrscr();
	printf("\n(0%) :- Milk, Plastic Bangles, Eggs, Curd, NewsPaper, Open flour, Jaggery,\nElectricity Bill, Gram Flour, Bread, Paapad, Oats, Rice, Fresh Vegetable, Salt, etc.");
	printf("\n\n(5%) :- Pasteurized Milk, Packed Paneer, Tea, Coal, Bio-Gas, Branded Wheat,\nBranded Rice, Branded Corn, Milk Powder, Raisins, LPG, etc.");
	printf("\n\n(12%) :- Butter, Paneer, Fruits, Nuts, Computer, Ghee, LED Lamp, Comb, Cards,\nCarrom Board, Toys, Electric Vehicles, etc.");
	printf("\n\n(18%) :- Tendu Leaves, Vegetable Waxes, Pasta, Macaroni, Noodles, Cord Flakes,\nBiscuits, Pastry, Cack, Ice-Cream, Mineral Water, Soap, Petroleum Jelly, Tubes\nand Pipes, etc.");
	printf("\n\n(28%) :- Chewing Gum, Bubble Gum, Chocolate, Cocoa Butter, Cocoa Powder,\nMarble Stone, Perfume, Shampoo, Hair Colours, Wash Basin, Mirror, Razor,\nRefrigerator, A.C., Vacuume Pipes, etc.");
	printf("\n\n\n\n\t\t\t* Press any key to continue *");
	}
	else
	{
	printf("Invalid Option");
	}
	getch();
}

void ihelp()
{
	clrscr();
	printf("\n1)Inter-State transport means the transaction made with one state to another.\nIn such scenario, only IGST is charged!");
	printf("\n\n2)Intra-State transport means the transaction made within the same state.\nIn such case, SGST and CGST will be charged equally!");
	printf("\n\n\n\n\n\n\n\t\t\t* Press any key to continue *");
	getch();
}