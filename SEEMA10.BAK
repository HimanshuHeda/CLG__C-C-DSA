#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
clrscr();
int n=5;
int x;
int q[5];
int front= 0;
int rear=-1;
printf("\n enter\n1 for inserting element\n2 for are moving element,\n3 to display queue,\n4 to quit\n exit");
while(1)
{
int choice;
printf("\n\n enter your choice:");
scanf("%d",& choice);
switch(choice)
{
case 1:
if(rear==n-1)
{
printf("queue an element whichis to be insert:");
scanf("%d",& x);
rear++;
q[rear]=x;
}
case 2:
if(rear==rear+1)
{
printf("queue is empty,can't dequeue");
break;
}
{
printf("poped element is %d",q[front]);
front++;
break;
}
case 3:
for(int i=front;i<rear;i++)
{
printf("\n%d",q[i]);
}
break;
case 4:
exit(0);
default:printf("please enter correct right choice");
}
}
getch();
}