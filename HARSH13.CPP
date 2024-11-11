																						/*
 Program for Single Inheritance.
																												*/
 #include<iostream.h>
 #include<conio.h>
 class A
 {
	int a;
	public:
		int b;
		void get_ab();
		int get_a();
		void show_a();
 };
 class B : public A
 {
	int c;
	public:
		void mul(void);
		void display(void);
 };
 void A :: get_ab(void)
 {
	a = 5;
	b = 10;
 }
 int A :: get_a()
 {
	return a;
 }
 void A :: show_a()
 {
	cout<<"A = "<<a<<"\n";
 }
 void B :: mul()
 {
	c = b * get_a();
 }
 void B :: display()
 {
	cout<<"A = "<<get_a()<<"\n";
	cout<<"B = "<<b<<"\n";
	cout<<"C = "<<c<<"\n";
 }
 void main()
 {
	clrscr();
		B Z;
		Z.get_ab();
		Z.mul();
		Z.show_a();
		Z.display();
	getch();
 }








