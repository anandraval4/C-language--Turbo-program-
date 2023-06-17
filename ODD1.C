#include<stdio.h>
#include<conio.h>
void main()
{
 int a;
 clrscr();
 printf("any value for a = ");
 scanf("%d",&a);
 if(a%2==0)
 {
	printf("\nyour no is even.");
 }
 else
 {
	printf("\nyour no is odd.");
 }
 getch();
}