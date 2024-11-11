																						/*
 Program for Multilevel Inheritance.
																												*/
 #include<iostream.h>
 #include<conio.h>
 class STUDENT
 {
	protected:
		int roll_number;
	public:
		void get_number(int);
		void put_number(void);
 };
 class TEST : public STUDENT
 {
	protected:
		float sub_1;
		float sub_2;
	public:
		void get_marks(float ,float);
		void put_marks(void);
 };
 class RESULT : public TEST
 {
	protected:
		float total;
	public:
		void display(void);
 };
 void STUDENT :: get_number(int a)
 {
	roll_number = a;
 }
 void STUDENT :: put_number()
 {
	cout<<"Roll Number = "<<roll_number<<"\n";
 }
 void TEST :: get_marks(float x,float y)
 {
	sub_1 = x;
	sub_2 = y;
 }
 void TEST :: put_marks()
 {
	cout<<"Sub 1 = "<<sub_1<<"\n";
	cout<<"Sub 2 = "<<sub_2<<"\n";
 }
 void RESULT :: display()
 {
	total = sub_1 + sub_2;
	put_number();
	put_marks();
	cout<<"TOTAL MARKS = "<<total<<"\n";
 }
 void main()
 {
	clrscr();
		RESULT R;
		R.get_number(1234);
		R.get_marks(22.5,32.2);
		R.display();
	getch();
 }








