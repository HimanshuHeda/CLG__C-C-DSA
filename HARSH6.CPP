																																			/*
 Write a program to print concept of costrustor.
																																										*/
 #include<iostream.h>
 #include<conio.h>
 class BCA
 {
	int m,n;
	public:
		BCA(int x,int y);
		void output(void);
 };
 BCA :: BCA(int x,int y)
 {
	m=x;
	n=y;
 }
 void BCA :: output(void)
 {
	cout<<"M = "<<m<<"\n";
	cout<<"N = "<<n<<"\n";
 }
 void main()
 {
	clrscr();
		BCA Z(0,100);
		BCA Z1=BCA(25,75);
		Z.output();
		Z1.output();
	getch();
 }