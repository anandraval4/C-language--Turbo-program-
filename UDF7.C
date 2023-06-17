#include<stdio.h>
#include<conio.h>
test(int a, int b)
{     int c;

      if(a>b)
      {
      c=a;

      }
      else
      {
      c=b;

      }


      return(c);



}
void main()
{         int a,b,ans,c;
	  clrscr();

	  printf("Enter value of a");
	  scanf("%d",&a);

	  printf("\nEnter value of b");
	  scanf("%d",&b);
	  ans=test(a,b);
	  printf("%d",ans);



	  getch();



}
