																				/*
 Write a program to print operators overloading. (binary operator) - minus
																												*/
 #include<iostream.h>
 #include<conio.h>
 class HIMANSHU
 {
	int x,y,z;
	public:
		void input(int a , int b , int c);
		void display(void);
		void operator -();
 };
 void HIMANSHU :: input(int a ,int b , int c)
 {
	x=a;
	y=b;
	z=c;
 }
 void HIMANSHU :: display(void)
 {
	cout<<"X = "<<x<<"\n";
	cout<<"Y = "<<y<<"\n";
	cout<<"Z = "<<z<<"\n";
 }
 void HIMANSHU :: operator -()
 {
	x = -x;
	y = -y;
	z = -z;
 }
 void main()
 {
	clrscr();
		HIMANSHU Z;
		Z.input(23,-32,65);
		Z.display();
		-Z;
		Z.display();
	getch();
 }