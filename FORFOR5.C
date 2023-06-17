#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c;
  clrscr();
  c=0;
  for(a=1;a<=5;a=a+1)      //printf("%d",a);first for is for row.
  {                        //printf("%d",a);second for is for the coloumn.


      for(b=1;b<=5;b=b+1)
       {
	  c=c+1;
	 printf(" %d ",c);
			     }
       printf("\n");
  }

	 getch();
}