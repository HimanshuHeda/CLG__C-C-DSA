																		/*
 Program for constructor in Derived Class.
																			*/
 #include<iostream.h>
 #include<conio.h>
 class ALPHA
 {
	int x;
	public:
		ALPHA(int i)
		{
			x = i;
		}
		void show_x(void)
		{
			cout<<"X = "<<x<<"\n";
		}
 };
 class BETA
 {
	float y;
	public:
		BETA(float j)
		{
			y = j;
		}
		void show_y(void)
		{
			cout<<"Y = "<<y<<"\n";
		}
 };
 class GAMMA : public ALPHA, public BETA
 {
	int m,n;
	public:
		GAMMA(int a,float b,int c,int d) : ALPHA(a), BETA(b)
		{
			m = c;
			n = d;
		}
		void show_mn(void)
		{
			cout<<"M = "<<m<<"\n";
			cout<<"N = "<<n<<"\n";
		}
 };
 void main()
 {
	clrscr();
		GAMMA G(5,10.75,20,30);
		G.show_x();
		G.show_y();
		G.show_mn();
	getch();
 }