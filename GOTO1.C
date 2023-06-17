#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	x:
	printf("enter marks for maths = ");
	scanf("%d",&a);
	if(a>100)
	{
	   goto x;
	}

	printf("\nmarks for maths = %d",a);
	getch();
}