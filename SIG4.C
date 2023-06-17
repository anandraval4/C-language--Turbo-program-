#include<stdio.h>
#include<conio.h>
void main()
{

	int a;
	clrscr();
	printf("Enter any number");
	scanf("%d",&a);
	if(a<=9)
	{
	printf("\nNumber is 1 digit");

	}
	else{
	printf("\nNumber is 2 digit");

	}
	getch();

}