#include<stdio.h>
#include<conio.h>
void main()
{
	       char a,b,c;
	       clrscr();

	       printf("Enter math grade");
	       scanf("%c",&a);
	       flushall();
	       printf("\nEnter phy grade");
	       scanf("%c",&b);
	       flushall();
	       printf("\nEnter chem grade");
	       scanf("%c",&c);

	       printf("\nMath grade is %c",a);
	       printf("\nphy grade is %c",b);
	       printf("\nchem grade is %c",c);

	       getch();




}