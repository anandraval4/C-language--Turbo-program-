#include<stdio.h>
#include<conio.h>
void main()
{

       int math,phy,tot;
       clrscr();
       printf("Enter your marks of math");
       scanf("%d",&math);

       printf("\nEnter your marks of phy");
       scanf("%d",&phy);

       tot=math+phy;
       if(tot>150){
       printf("\nYour total is %d",tot);

       }
       else
       {

       printf("\nYou not selected");
       }
       getch();







}