																	/*
 Program for THIS POINTER.
																*/
 #include<iostream.h>
 #include<string.h>
 #include<conio.h>
 class PERSON
 {
	char name[20];
	int age;
		public:
		PERSON (char*s, int a)
		{
			strepy (name, s);
			age = a;
		}
		PERSON PERSON :: greater(PERSON &x)
		{
			if(x.age>=age)
				return x;
			else
				return * this;
		}
	void display(void)
	{
		cout<<"NAME = "<<name<<"\n";
		cout<<"AGE = "<<age<<"\n";
	}
 };
 void main()
 {
	clrscr();
		PERSON p1("JHON",37),
		       p2("SOGRAM",29),
		       p3("HEDA",5);
		PERSON p = p1.greater(p3);
		cout<<"Elder Person : \n";
			p.display();
		p = p1.greater(p2);
		cout<<"Elder Person : \n";
			p.display();
	getch();
 }