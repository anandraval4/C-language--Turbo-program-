#include<stdio.h>
#include<conio.h>
int txt(int a,int b)
{
  int c;
  c=a+b;
  return(c);

}
void main()
{
  int a,b,ans;
  clrscr();
  printf("a = ");
  scanf("%d",&a);
  printf("b = ");
  scanf("%d",&b);
  ans=txt(a,b);
  printf("total = %d",ans);
  getch();
}