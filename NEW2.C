#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c,d,e,f,g;
  clrscr();
  printf("value of a = ");
  scanf("%f",&a);

  printf("value of b = ");
  scanf("%f",&b);

  printf("\npress 1 for +");
  printf("\npress 2 for -");
  printf("\npress 3 for *");
  printf("\npress 4 for /");
  scanf("%f",&c);

  if(c==1)
  {
   d=a+b;
   printf("total = %f",d);
  }
  if(c==2)
  {
   e=a-b;
   printf("total = %f",e);
  }
  if(c==3)
  {
   f=a*b;
   printf("total= %f",f);
  }
  if(c==4)
  {
   g=a/b;
   printf("total = %f",g);
  }
   getch();

}