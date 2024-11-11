																	/*
 Program for Rethrow exception.
													*/
 #include<iostream.h>
 #include<conio.h>
 int fact(int);
 int fact(int n)
 {
	if(n > 1)
	{
		return n* fact(n - 1);
	}
	else
	{
		return 1;
	}
 }
 void main()
 {
	clrscr();
		int n, result;
		cout<<"Enter a number = ";
			cin>>n;
		result = fact(n);
		cout<<"Factorial of "<<n<<" = "<<result;
	getch();
 }