#include<stdio.h>
#include<conio.h>
void main()
{
 int a[5]={1,2,3,4,5},b;
 clrscr();

// for(b=0;b<=4;b=b+1)    //for the front order.
   for(b=4;b>=0;b=b-1)    //for the reverse order.
 {
  printf(" %d ",a[b]);

 }
    getch();
}