#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b;
  clrscr();
  b=0;
  for(a=1;a<=10;a=a+1)
 {
   printf("%d",a);
   printf("\n");
   b=b+a;

 }
   printf("total = %d",b);
   getch();

}
