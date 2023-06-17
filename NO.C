#include<stdio.h>
#include<conio.h>
void test()
{               int a,b;

		printf("Enter value of a ");
		scanf("%d",&a);

		printf("\nEnter value of b ");
		scanf("%d",&b);

		printf("\na + b = %d",a+b);
		printf("\na - b = %d",a-b);
		printf("\na*b =%d",a*b);
		printf("\na/b =%d",a/b);


}

void main()
{

		   clrscr();

		   test();

		   getch();


}