																								 /*
 Write a program to print Function Overloading.
																														*/
 #include<iostream.h>
 #include<conio.h>
 int volume(int s)
 {
	return(s*s*s);
 }
 double volume(double r,int h)
 {
	return(3.14*r*r*h);
 }
 long volume(long l,int b,int h)
 {
	return(l*b*h);
 }
 void main()
 {
	clrscr();
		cout<<volume(10)<<"\n";
		cout<<volume(2.5,8)<<"\n";
		cout<<volume(100L,75,15)<<"\n";
	getch();
 }
