#include <stdio.h>
#include <conio.h>
void main()
{
		   int a;
		   clrscr();
		   printf("Enter star 1,2or3");
		   scanf("%d",&a);

		   switch(a){
		   case 1: printf("\nStar is one");
			   break;

		   case 2: printf("\nStar is two");
			   break;

		   case 3: printf("\nStar is three");
			   break;

		   default: printf("star is not valid");

		   }

		   getch();



}