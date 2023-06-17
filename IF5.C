#include<stdio.h>
#include<conio.h>
void main()

{ int a,b,c;
  clrscr();
  printf("subject 1 = ");
  scanf("%d",&a);

  printf("subject 2 = ");
  scanf("%d",&b);
  c=a+b;


  if(c>150)
  {
   printf("\nyou are selected.");
   printf("\ntotal = %d",c);
     }
  else
  {
   printf("\nyou are not selected.");
  }


  getch();
}