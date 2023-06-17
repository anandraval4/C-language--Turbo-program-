#include<stdio.h>
#include<conio.h>
void main()
{
	     int a[5];
	     int b;
	     int tot;
	     tot=0;
	     clrscr();

	     for(b=0;b<=4;b=b+1)
	     {
	     printf("Enter any number");
	     scanf("%d",&a[b]);
	     tot=tot+a[b];

	     }

	     printf("Total is %d",tot);
	     getch();


}