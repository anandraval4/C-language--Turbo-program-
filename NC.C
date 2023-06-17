#include<stdio.h>
#include<conio.h>
void main()
{
       int a,b,c;
       clrscr();
       c=0;

       for(a=1;a<=5;a=a+1){

       printf("Enter any number");
       scanf("%d",&b);



       if(b>0)
       {
       c=b+c;

       }
       }

       printf("\nTotal is %d",c);







       getch();




}
