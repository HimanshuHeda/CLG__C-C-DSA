																						/*
 Program for Hierachical Inheritance.
																												*/
 #include<iostream.h>
 #include<conio.h>
 class ANIMAL
 {
	public:
		void info();
 };
 class DOG : public ANIMAL
 {
	public:
		void get_dog();
 };
 class CAT : public ANIMAL
 {
	public:
		void get_cat();
 };
 void ANIMAL :: info()
 {
	cout<<"I am a ANIMAL.\n";
 }
 void DOG :: get_dog()
 {
	cout<<"I am a DOG.\n";
 }
 void CAT :: get_cat()
 {
	cout<<"I am a CAT.\n";
 }
 void main()
 {
	clrscr();
		DOG D;
		CAT C;
		D.info();
		D.get_dog();
		C.info();
		C.get_cat();
	getch();
 }








