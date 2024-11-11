																				/*
 Program for Overloading of Function Template.
													*/
 #include<iostream.h>
 #include<string.h>
 #include<conio.h>
 template <class T1>
 void display(T1 x)
 {
	cout<<"Template Display = "<<x<<"\n";
 }
 int display(int x)
 {
	cout<<"Explicit Display = "<<x<<"\n";
 }
 void main()
 {
	clrscr();
		display(100);
		display(12.34);
		display('C');
	getch();
 }