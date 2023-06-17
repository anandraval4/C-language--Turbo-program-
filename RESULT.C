#include <stdio.h>
#include <conio.h>
void main()
{
       int math,phy,chem,tot,per;

       clrscr();

       printf("Enter your math marks");
       scanf("%d",&math);

       printf("\nEnter your phy marks");
       scanf("%d",&phy);

       printf("\nEnter your chem marks");
       scanf("%d",&chem);

       tot=math+phy+chem;

       printf("\nYour total mark is %d",tot);

       per=tot/3;

       printf("\nYour percentage is %d",per);
       getch();







}