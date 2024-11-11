
 #include<stdio.h>
 #include<conio.h>
 void cal(void);
 void main()
 {
   float i,n,tax;
   clrscr();
   printf("\n\n\n		        ***	Calculator by HIMANSHU    ***\n" );
   printf("	*** To exit the calculator, just press 0 and hit enter 2 times! *** ");
   {
     printf("Enter the basic salary: ");
     scanf("%f",&i);
     printf("Enter the total savings made: ");
     scanf("%f",&n);
   }
   {
     if (i<=250000)
     tax = 0;
   }
   {
     else if (i<=500000)
	if (n > 150000)
	n = 150000
	tot_income = i-n-250000
	tax =tot_income * 0.05;
   }
   {
     else if (i<=1000000)
	 if (n > 150000)
	 n = 150000
	 tot_income_5slab = 500000-n-250000
	 tot_income_20slab = i-500000
	 tax =tot_income_5slab*0.05 + tot_income_20slab*0.02
   }
   {
     else
	 if (n > 150000)
	 n = 150000
	 tot_income_5slab = 500000-n-250000
	 tot_income_30slab = i-1000000
	 tax =tot_income_5slab*0.05 + tot_income_20slab*0.03 + 100000
   }
   printf("Total Income Tax to be paid = ",tax);
   getch();
 }
 }
 }