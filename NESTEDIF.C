#include<stdio.h>
#include<conio.h>
void main()
{
   int a;
   clrscr();
   printf("any value for a = ");
   scanf("%d",&a);
  if(a>0)
  {
     printf("your no. is greater than 0.");

     if(a>100)
     { printf("\nyour no. is greater than 100 also.");}
  }
   else
  {
    printf("your no. is less than 0.");

  }
   getch();


}