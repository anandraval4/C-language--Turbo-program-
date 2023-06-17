#include<stdio.h>
#include<stdio.h>
void main()
{      int per,math,phy,chem,tot;
       clrscr();
       printf("Enter your percentage");
       scanf("%d",&per);

       if(per>70)
       {
	 printf("\nEnter your math marks");
	 scanf("%d",&math);

	 printf("\nEnter your phy marks");
	 scanf("%d",&phy);

	 printf("\nEnter your chem marks");
	 scanf("%d",&chem);

	 tot=math+phy+chem;

	 if(tot>250)
	 {
	 printf("You get admission");

	 }
	 else
	 {
	 printf("Your mark is not valid for admission");

	 }

       }
       else
       {
       printf("You disqualified");


       }
       getch();




}