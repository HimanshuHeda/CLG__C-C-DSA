
 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 clrscr();
 float amount;
 printf("\nTHIS IS THE PROGRAM OF ATM BY HIMANSHU HEDA\n");
 printf("\nPlease enter the Amount you want to submit in Bank:---\n%f",amount);
 scanf("%f",amount);
 if (amount==10000){
	printf("You are elegible to widrow the amount. ");
 }
 else if (amount<=20000){
	printf("You require OTP....to Widhraw the Amount");
 }
 else if (amount>=20000){
	printf("You have to contact to main branch this much amount is not\n withdrawn through ATM MACHINE ");
	}
 else{
	printf("THANK YOU!!!\nCOME AGAIN NEXT TIME......\nHAVE A GREAT DAY SIR/MAM");
     }
 getch();
 }