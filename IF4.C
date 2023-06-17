#include<stdio.h>
#include<conio.h>
void main()
{
  int a;
  clrscr();
  printf("any value for a = ");
  scanf("%d",&a);

  if(a>0)
  {
   printf("your no. is positive.");

  }

  if(a<0)
  {
   printf("your no. is negative.");

  }
  if(a==0)
  {
   printf("your no. is zero.");

  }
  getch();
}