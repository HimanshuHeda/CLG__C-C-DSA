																							/*
 Program for Distructor.....
																								*/
 #include<iostream.h>
 #include<conio.h>
 int count = 0;
 class alpha
 {
	public:
		alpha()
		{
			count++;
			cout<<"No. of object created : "<<count<<"\n";
		}
		~alpha()
		{
			count--;
			cout<<"No. of object destroyed : "<<count<<"\n";
		}
 };
 void main()
 {
	clrscr();
		cout<<"\nEnter the main : \n";
			alpha A1, A2, A3, A4;
			{
				cout<<"Enter Ist Block : \n";
					alpha A5;
			}
			{
				cout<<"Enter IInd Block : \n";
					alpha A6;
			}
	getch();
 }
