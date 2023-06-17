
#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c;
  clrscr();
  b=0;
  c=0;
  for(a=1;a<=10;a=a+1)
  {
   printf("any value of a = ");

   scanf("%d",&b);
   if(b>0)
   {
    c=c+b;

   }




  }
   printf("\ntotal of all no = %d",c);
   getch();

}