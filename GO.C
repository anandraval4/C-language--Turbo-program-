#include <stdio.h>
#include <conio.h>
void main()
{
	  int num;
	  clrscr();
	  printf("Enter any number");
	  scanf("%d",&num);

	  if(num>0)
	  {
	  printf("\nNumber is positive");

	  }

	  else if(num==0)
	  {
	  printf("\nNumber is zero");

	  }
	  else if (num<0)
	  {
	  printf("\nNumber is negative");

	  }

	  getch();
}