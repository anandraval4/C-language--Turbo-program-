#include<stdio.h>
#include<conio.h>
void main()
{
	     int a,b,c,d,e;
	     clrscr();
	     c=0;
	     d=0;
	     e=0;

	     for(a=1;a<=10;a=a+1)
	     {
	     printf("Enter number");
	     scanf("%d",&b);

	     if(b>0)
	     {
	     c=c+1;


	     }
	     else if(b<0)
	     {
	     d=d+1;

	     }
	     else if(b==0)
	     {
	     e=e+1;

	     }


	     }

	     printf("\nPositive is %d",c);
	     printf("\nNegative is %d",d);
	     printf("\nZero is %d",e);

	     getch();



}