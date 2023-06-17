#include<stdio.h>
#include<conio.h>
void ak(int a,int b)
{
  int c;
  c=a+b;
  printf("a+b = %d",c);

}
void main()
{
  int a,b;
  clrscr();
  printf("a = ");
  scanf("%d",&a);
  printf("b = ");
  scanf("%d",&b);
  ak(a,b);
  getch();
}