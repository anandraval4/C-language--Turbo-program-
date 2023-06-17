#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();

	printf("enter any no for a = ");
	scanf("%d",&a);
	if(a>100)  // >   <    >=   <=  ==  !=   a=22
	{
	   printf("\nyour no is above 100.");
	}
	else
	{
		printf("\nyour no is under 100.");
	}
	getch();

}