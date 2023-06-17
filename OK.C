#include<stdio.h>
#include<conio.h>
void main()
{
	   int a;
	   clrscr();
	   x:

	   printf("Enter math marks");
	   scanf("%d",&a);

	   if(a>100){

	   goto x;

	   }
	   printf("Math marks is %d",a);
	   getch();




}