#include<stdio.h>
#include<conio.h>
void main()
{
 int a;
 clrscr();
 printf("your choice is (1,2 or 3) = ");
 scanf("%d",&a);
 switch(a)
 {
   case 1:    printf("\nyour choice is one.");
	      break;
   case 2:    printf("\nyour choice is two.");
	      break;
   case 3:    printf("\nyour choice is three.");
	      break;

	      default:
	      printf("out of the choice plz try again.");

 }

    getch();
}