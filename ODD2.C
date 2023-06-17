#include<stdio.h>
#include<conio.h>
void main()
{
  int a;
  clrscr();
  printf("any value for a = ");
  scanf("%d",&a);
  if(a%2==0)
  {
   printf("the no. is even.");

  }
  else
  {
   printf("the no. is odd.");
  }
   getch();
}