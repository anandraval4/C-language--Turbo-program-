#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b,c,d,e;
   clrscr();
   printf("subject 1 = ");
   scanf("%d",&a);
   printf("subject 2 = ");
   scanf("%d",&b);
   printf("subject 3 = ");
   scanf("%d",&c);

   d=a+b+c;
   e=d/3;
   if(e>90)
   {
    printf("A grade.");
   }
  else if(e>80)
   {
    printf("B grade.");
   }
  else if(e>70)
   {
    printf("C grade.");
   }
   else
   {
    printf("D grade.");
   }
   printf("\nmarks obtained in sub 1 = %d",a);
   printf("\nmarks obtained in sub 2 = %d",b);
   printf("\nmarks obtained in sub 3 = %d",c);
   printf("\ntotal = %d",d);
   printf("\npercentage = %d",e);
   getch();



}