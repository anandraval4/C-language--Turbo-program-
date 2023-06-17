#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c,d,e,f,g;
  clrscr();
  printf("any value for a = ");
  scanf("%d",&a);
  printf("any value for b = ");
  scanf("%d",&b);

  printf("\npress 1 for +");
  printf("\npress 2 for -");
  printf("\npress 3 for *");
  printf("\npress 4 for /");
  scanf("%d",&c);

  if(c==1)
  {
   d=a+b;
   printf("total = %d",d);
  }
  if(c==2)
  {
   e=a-b;
   printf("total = %d",e);

  }
  if(c==3)
  {
   f=a*b;
   printf("total = %d",f);

  }
  if(c==4)
  {
   g=a/b;
   printf("total = %d",g);

  }
  getch();
}