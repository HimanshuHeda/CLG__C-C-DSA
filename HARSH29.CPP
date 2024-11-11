																		/*
 Program for Default Argument.
																											*/
 #include<iostream.h>
 #include<conio.h>
 void ABC(char country[10] = "INDIA")
 {
	cout<<country<<"\n";
 }
 void main()
 {
	clrscr();
		ABC("USA");
		ABC("CHINA");
		ABC();
	getch();
 }