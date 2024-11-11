 #include<stdio.h>
 #include<conio.h>

 void main()
 {
   float i,s,tax,ti, ti5, ti20, ti30;
   clrscr();
   printf("\n\n\n		        ***	Calculator by HIMANSHU    ***\n" );
   printf("	*** To exit the calculator, just press ENTER! *** \n");
   printf("Enter the basic salary: ");
   scanf("%f",&i);
   printf("Enter the total savings made: ");
   scanf("%f",&s);
   if(i<=250000)
	tax = 0;
   else if(i<=500000)
   {	if(s > 150000)
	{
		s = 150000;
		ti = i-s-250000;
		tax =ti* 0.05;
	}
   }
   else if(i<=1000000)
   {	 if (s > 150000)
	 {
		s = 150000;
		ti5 = 500000-s-250000;
		ti20 = i-500000;
		tax =ti5 * 0.05 + ti20 * 0.02;
	}
   }
   else
   {	 if (s> 150000)
	 {
		s = 150000;
		ti5 = 500000-s-250000;
		ti30 = i-1000000;
		tax =ti5*0.05 + ti20 * 0.03 + 100000;
	 }
   }
   printf("Total Income Tax to be paid = %f ",tax);
   getch();
 }