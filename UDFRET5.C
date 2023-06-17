#include<stdio.h>
#include<conio.h>
int txt()
{
  int a,b,c;
  printf("a = ");
  scanf("%d",&a);
  printf("b = ");
  scanf("%d",&b);
  c=a/b;
  return(c);
}
void main()
{
  int ans;
  clrscr();
  ans=txt();
  printf("a/b = %d",ans);
  getch();
}