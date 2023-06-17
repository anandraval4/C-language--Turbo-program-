#include<stdio.h>
#include<conio.h>
void main()
{
  int a;
  clrscr();
  printf("any value for a = ");
  scanf("%d",&a);

  if(a>300)
  {
   printf("your no. is greater than 300.");

  }
  else if(a>200)
   {
    printf("\nyour no. is greater than 200.");

   }
   else if(a>100)
   {
    printf("\nyour no. is greater than 100.");

   }
   else
   {
     printf("your no. is lying under 100.");
   }
   getch();
}