																	/*
 Program for Stack Data Member.
																*/
 #include<iostream.h>
 #include<conio.h>
 class TEAM
 {
	static int count;
	int number;
		public:
		void input(int a)
		{
			number = a;
			count++;
		}
		void display(void)
		{
			cout<<"COUNT = "<<count<<"\n";
		}
 };
 int TEAM :: count;
 void main()
 {
	clrscr();
		TEAM a,b,c;
		a.display();
		b.display();
		c.display();
		a.input(100);
		b.input(100);
		c.input(100);
		a.display();
		b.display();
		c.display();
	getch();
 }