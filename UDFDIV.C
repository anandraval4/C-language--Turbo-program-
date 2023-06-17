#include<stdio.h>
#include<conio.h>
void text(int a,int b,int c)
{
  int d,e;
  d=a+b+c;
  e=d/3;
  printf("total = %d",d);
  printf("\npercentage = %d",e);

}

void main()
{
	int a,b,c;
	clrscr();
	printf("subject 1 = ");
	scanf("%d",&a);
	printf("subject 2 = ");
	scanf("%d",&b);
	printf("subject 3 = ");
	scanf("%d",&c);
	text(a,b,c);
	getch();
}