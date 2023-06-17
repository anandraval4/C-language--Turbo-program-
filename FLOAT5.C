#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,c;
	clrscr();
	printf("a = ");
	scanf("%f",&a);
	printf("b = ");
	scanf("%f",&b);
	c=a/b;
	printf("a/b = %f",c);
	getch();
}