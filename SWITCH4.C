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

   printf("\npress 1 for +.");
   printf("\npress 2 for -.");
   printf("\npress 3 for *.");
   printf("\npress 4 for /.");
   scanf("%d",&c);

   switch(c)

 {  case 1: d=a+b;
	   printf("total = %d",d);
	   break;
   case 2: e=a-b;
	   printf("total = %d",e);
	   break;
   case 3: f=a*b;
	   printf("total = %d",f);
	   break;
   case 4: g=a/b;
	   printf("total = %d",g);
	   break;
   default: printf("out of your choice plz try again."); }
	 getch();
}