#include<stdio.h>
#include<conio.h>
test()
{          float b;
	   int c,d;

	   printf("\nEnter your percentage");
	   scanf("%f",&b);

	   c=b/10;

	   return(c);

}
void main()
{

		 char a[100];
		 int grade;
		 clrscr();

		 printf("Enter your name");
		 gets(a);

		 grade=test();

		 printf("%d",grade);

		 getch();


}
