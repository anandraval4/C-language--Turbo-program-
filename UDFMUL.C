#include<stdio.h>
#include<conio.h>
void yk(int a,int b)
{
 int c;
 c=a*b;
 printf("a*b = %d",c);
}
void main()
{
  int a,b;
  clrscr();
  printf("a = ",a);
  scanf("%d",&a);
  printf("b = ",b);
  scanf("%d",&b);
  yk(a,b);
  getch();

}

