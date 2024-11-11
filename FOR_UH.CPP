
 #include<stdio.h>
 #include<conio.h>
 #include<dos.h>
 void main()
 {
	int i;
	textcolor(RED);
	textbackground(WHITE);
	for(i=0;i<=20;i++)
	{
	cprintf("I love you");
	delay(300);
	printf("\n");
	}
	getch();
	clrscr();
 }