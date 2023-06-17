#include <stdio.h>
#include <conio.h>
void main()
{
	 int a,b;
	 clrscr();

	 printf("Enter year");
	 scanf("%d",&a);

	 if(a%4==0)
	 {
	 printf("\nLeap year");

	 }

	 else
	 {
	 printf("\nNot leap year");

	 }
	 getch();


}