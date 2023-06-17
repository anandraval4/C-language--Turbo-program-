#include<stdio.h>
#include<conio.h>
void main()
{
	char a[50];
	clrscr();


	printf("enter your name = ");
//	scanf("%s",&a);
	gets(a);

	printf("\nyour name is %s",a);
	getch();
}