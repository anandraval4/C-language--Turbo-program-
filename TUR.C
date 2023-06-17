#include<stdio.h>
#include<conio.h>
void main()
{
	      int a[10];
	      int b;
	      clrscr();

	      for(b=0;b<=9;b=b+1)
	      {
	      printf("Enter any number");
	      scanf("%d",&a[b]);

	      }
	      for(b=9;b>=0;b=b-1)
	      {
	      printf("%d\n",a[b]);

	      }




	      getch();

}