#include<stdio.h>
#include<conio.h>
void main()
{

	     int math,phy,chem,tot,grade,per;
	     clrscr();

	     printf("Enter math marks");
	     scanf("%d",&math);

	     printf("\nEnter phy marks");
	     scanf("%d",&phy);

	     printf("\nEnter chem marks");
	     scanf("%d",&chem);

	     tot=math+phy+chem;

	     printf("\nTotal of mark is %d",tot);

	     per=tot/3;

	     printf("\nPercentage is %d",per);

	     if(80<per)
	     {
	     printf("\nGrade is A");

	     }
	     else if(70<per)
	     {
	     printf("\nGrade is B");

	     }
	     else if(60<per)
	     {
	     printf("\nGrade is c");


	     }
	     else if(40<per)
	     {
	     printf("\nGrade is D");

	     }
	     else if(30<per)
	     {
	     printf("\nGrade is F");

	     }
	     getch();






}