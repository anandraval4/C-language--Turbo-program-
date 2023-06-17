#include<stdio.h>
#include<conio.h>
void main()
{

		      int a[10];
		      int b,c,d=0;
		      clrscr();

		      for(b=0;b<=9;b=b+1)
		      {
		      printf("Enter any number");
		      scanf("%d",&a[b]);


		      }
		      printf("\nenter number");
		      scanf("%d",&c);

		      for(b=0;b<=9;b=b+1)
		      {
		      if(a[b]==c)
		      {
			 d=d+1;

		      }

		      }

		      printf("Found %d",d);
		      getch();


}