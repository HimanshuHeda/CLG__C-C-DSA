																						/*
 Program for Multiple Inheritance.
																												*/
 #include<iostream.h>
 #include<conio.h>
 class M
 {
	protected:
		int m;
	public:
		void get_m(int);
 };
 class N
 {
	protected:
		int n;
	public:
		void get_n(int);
 };
 class P : public M, public N
 {
	public:
		void display(void);
 };
 void M :: get_m(int x)
 {
	m = x;
 }
 void N :: get_n(int y)
 {
	n = y;
 }
 void P :: display(void)
 {
	cout<<"M = "<<m<<"\n";
	cout<<"N = "<<n<<"\n";
	cout<<"TOTAL = "<<m*n<<"\n";
 }
 void main()
 {
	clrscr();
		P V;
		V.get_m(20);
		V.get_n(10);
		V.display();
	getch();
 }








