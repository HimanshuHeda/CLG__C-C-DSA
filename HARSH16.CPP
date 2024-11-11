																						/*
 Program for Hybrid Inheritance.
																												*/
 #include<iostream.h>
 #include<conio.h>
 class STUDENT
 {
	protected:
		int rn;
	public:
		void get_rn(int);
		void put_rn();
 };
 class TEST : public STUDENT
 {
	protected:
		float sub1, sub2;
	public:
		void get_marks(float , float);
		void put_marks(void);
 };
 class SPORTS
 {
	protected:
		float score;
	public:
		void get_score(float);
		void put_score(void);
 };
 class RESULT : public TEST, public SPORTS
 {
		float total;
	public:
		void display();
 };
 void STUDENT :: get_rn(int a)
 {
	rn = a;
 }
 void STUDENT :: put_rn()
 {
	cout<<"Roll No. = "<<rn<<"\n";
 }
 void TEST :: get_marks(float x , float y)
 {
	sub1 = x;
	sub2 = y;
 }
 void TEST :: put_marks()
 {
	cout<<"Sub1 = "<<sub1<<"\n";
	cout<<"Sub2 = "<<sub2<<"\n";
 }
 void SPORTS :: get_score(float s)
 {
	score = s;
 }
 void SPORTS :: put_score()
 {
	cout<<"Score = "<<score<<"\n";
 }
 void RESULT :: display()
 {
	total = sub1 + sub2 + score;
	put_rn();
	put_marks();
	put_score();
	cout<<"TOTAL MARKS = "<<total<<"\n";
 }
 void main()
 {
	clrscr();
		RESULT V;
		V.get_rn(1234);
		V.get_marks(23.7,54.2);
		V.get_score(6.5);
		V.display();
	getch();
 }








