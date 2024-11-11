																		/*
 Program for Function Template.
																			*/
 #include<iostream.h>
 #include<conio.h>
 template <class T>
 void swap(T &x, T &y)
 {
	T temp = x;
	x = y;
	y = temp;
 }
 void fun(int m, int n, float a, float b)
 {
	cout<<"BEFORE SWAPING M&N \nM = "<<m<<"\nN = "<<n<<"\n";
		swap(m,n);
	cout<<"AFTER SWAPING M&N \nM = "<<m<<"\nN = "<<n<<"\n";
	cout<<"AFTER SWAPING A&B \nA = "<<a<<"\nB = "<<b<<"\n";
		swap(a,b);
	cout<<"AFTER SWAPING A&B \nA = "<<a<<"\nB = "<<b<<"\n";
 }
 void main()
 {
	clrscr();
		fun(100,200,22.2,33.3);
	getch();
 }