#include<stdio.h>
#include<conio.h>
void test(int a, int b, int c)
{
	   int tot;
	   tot=a+b+c;
	   printf("Total is %d",tot);
	   printf("Percentage is %d",tot/3);

}
void main()
{
	   int a,b,c;
	   clrscr();

	   printf("Enter math marks");
	   scanf("%d",&a);

	   printf("\nEnter chem marks");
	   scanf("%d",&b);

	   printf("\nEnter phy marks");
	   scanf("%d",&c);

	   test(a,b,c);
	   getch();

}