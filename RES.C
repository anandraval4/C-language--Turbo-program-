#include<stdio.h>
#include<conio.h>
void main()
{

	 int age,drive,code;
	 clrscr();
	 printf("\t\t\t\tDRIVING RTO");

	 printf("\nEnter your age");
	 scanf("%d",&age);

	 if(age<18)
	 {
	       printf("\nYour age is %d you are not able to drive",age);
	       printf("\nYou have special permssion then write here code");
	       scanf("%d",&drive);
	 }
	 if(code>1000)
	 {
	 printf("\nYour age is %d you able to drive",age);

	 }
	 else
	 {
	 printf("\nYou able to drive");
	 }
	 getch();


}