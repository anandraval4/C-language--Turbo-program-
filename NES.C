#include <stdio.h>
#include <conio.h>
void main()
{
	 int a,b;
	 clrscr();

	 printf("Enter percentage");
	 scanf("%d",&a);

	 b=a/10;
	 switch(b){
	 case 9: printf("A grade");
		 break;

	 case 8: printf("B grade");
		 break;

	 case 6: printf("C grade");
		 break;

	 case 5: printf("D grade");
		 break;

	 default: printf("F grade");

	 }
	 getch();






}