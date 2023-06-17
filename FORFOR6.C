#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c;
  clrscr();
  c=1;
  for(a=1;a<=5;a=a+1)
   {

	  for(b=1;b<=5;b=b+1)
	  {  //for even numbers.
	       c=c+2;
	       printf(" %d ",c);


	  }
	  printf("\n");
   }      getch();

}