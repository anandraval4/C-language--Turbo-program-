#include<stdio.h>
#include<conio.h>
int text()
{
  int a,b,c;
  printf("a = ");
  scanf("%d",&a);
  printf("b = ");
  scanf("%d",&b);
  c=a+b;
  return(c);
}
void main()
{
  int ans;
  clrscr();
  ans=text();
  printf("a+b = %d",ans);
  getch();

}