#include<stdio.h>
#include<conio.h>
void main()
{
       int a[5]={12,23,34,45,56},b;
       clrscr();
       printf("\nfirst value of a = %d",a[0]);
       printf("\nthird value of a = %d",a[2]);

       b=a[0]+a[2];
       printf("\ntotal = %d",b);

       getch();


}