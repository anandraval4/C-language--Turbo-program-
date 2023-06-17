#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 clrscr();
 printf("enter any value for a.");
 scanf("%d",&a);
 printf("enter any value for b.");
 scanf("%d",&b);
 printf("enter any value for c.");
 scanf("%d",&c);

 if((a>b)&&(a>c))
{ printf("a is the greatest.");  }
else if((b>c)&&(b>a))
 {
  printf("b is the gratest.");
 }
  else
  {
   printf("c is the greatest.");
  }
  getch();

}