#include<stdio.h>
#include<conio.h>
void main()
{
       int a,b,c,d;
       clrscr();
       c=0;
       d=0;

       for(a=1;a<=5;a=a+1)
       {
       printf("Enter number");
       scanf("%d",&b);

       if(b>0)
       {
       c=b+c;

       }
       else if(b<0)
       {

       d=b+d;

       }


       }
       printf("Total of positive is %d",c);
       printf("Total of negative is %d",d);

       getch();

}