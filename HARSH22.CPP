																		/*
 Program for Function Templates with multiple parameters
																				*/
 #include<iostream.h>
 #include<string.h>
 #include<conio.h>
 template <class T1, class T2>
 void display(T1 x,T2 y)
 {
	cout<<x<<" "<<y<<"\n";
 }
 void main()
 {
	clrscr();
		display(1999,"EBG");
		display(12.34,1234);
	getch();
 }
