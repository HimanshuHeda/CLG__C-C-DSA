
 #include<stdio.h>
 #include<conio.h>
 void main(){
	clrscr();
	float a,b,x;
	printf("\n\n\n		        ***	Calculator by HIMANSHU    ***\n" );
 do{
	printf("DATA OF BCA STUDENTS\n\n");
	printf("\n\nFOR BOYS LIST PLEASE ENTER A");
	printf("\n\nFOR GIRLS LIST PLEASE ENTER B");
		scanf("%f",x);
		if (a==1){
		printf("THE LIST OF BOYS IS HEAR\n\n");
			scanf("%f",&a);
		printf("1.HIMANSHU HEDA\n\n2.SANGRAM SINGH BHATI\n\n3.ATHER NEHAREGAR\n\n4.RAJAT TAILOR\n\n");
		}
		else if(b==2){
		printf("\n\nTHE LIST OF GIRLS IS HEAR\n\n");
			scanf("%f",&b);
		printf("1.SALONI TIWARI\n\n2.KIRAN BHATI\n\n3.KRISHNA CHIPA\n\n4.TANISHA\n\n");
		}
 }
 while (a>0);
 getch();
 }