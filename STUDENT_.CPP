
 #include<iostream.h>
 #include<conio.h>
 class student
 {
 int roll_no;
 char name[30];
 char fav_subject[30];
	public:
		void input(void);
		void output(void);
 };
 void student :: input (void)
 {
	cout<<"Enter Roll No. : \n";
	cin>>roll_no;
	cout<<"Enter Name : \n";
	cin>>name;
	cout<<"Enter Fav Sub. : \n";
	cin>>fav_subject;
 }
 void student :: output (void)
 {
	cout<<"Roll No. = " <<roll_no;
	cout<<"Name = "<<name;
	cout<<"Fav. Sub. = "<<fav_subject;
 }
 void main()
 {
	clrscr();
	student s;
	s.input();
	s.output();
	getch();
 }