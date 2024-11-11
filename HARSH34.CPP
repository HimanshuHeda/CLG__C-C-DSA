																				/*
 Program for the concept of Get() & Put().
																		*/
 #include<iostream.h>
 #include<conio.h>
 void main()
 {
	clrscr();
	int count = 0;
	char c;
	cout<<"INPUT TEXT\n";
	cin.get(c);
	while(c!='n')
	{
		cout.put(c);
		count++;
		cin.get(c);
	}
	cout<<"\nNo. of Charaters ="<<count<<"\n";
	getch();
 }