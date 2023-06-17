#include<stdio.h>
#include<conio.h>
void main()
{
       int a,b,c,d;
       clrscr();
       c=0;
       d=0;

       for(a=1;a<=10;a=a+1)
       {
       printf("Enter any number");
       scanf("%d",&b);

       if(b>0)
       {
       c=c+1;

       }
       else if(b<0)
       {
       d=d+1;

       }

       }

       printf("\n posi Total is %d",c);


       {
       printf("\n nega Total is %d",d);

       }


       getch();

}