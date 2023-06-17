#include<stdio.h>
#include<conio.h>
void main()
{
      int math,phy,chem,tot,meet;
      clrscr();
      printf("Enter your math marks");
      scanf("%d",&math);
      printf("\nEnter your phy marks");
      scanf("%d",&phy);
      printf("\nEnter your chem marks");
      scanf("%d",&chem);

      tot=math+phy+chem;
      printf("\nYour total is %d",tot);

      if(tot<102)
      {
	 printf("\nYou are fail");
	 printf("\nEnter your meet code");
	 scanf("%d",&meet);

	 if(meet<50)
	 {
	 printf("\nYour meeting fix with principal");

	 }

	 else
	 {
	 printf("\ninvalid code");

	 }
      }
	 else
	 {
	 printf("\nYou are pass");

	 }
	 getch();
      }



