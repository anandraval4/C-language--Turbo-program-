#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 clrscr();
 x:
 printf("marks of maths = ");
 scanf("%d",&a);
 if(a>100)
 {
  goto x;

 }
 if(a<0)
 {
  goto x;
 }
 q:
 printf("marks of science =");
 scanf("%d",&b);
 if(b>100)
 {
  goto q;

 }
 if(b<0)
 {
  goto q;
 }
 z:
 printf("marks of ss = ");
 scanf("%d",&c);
 if(c>100)
 {
  goto z;

 }
 if(c<0)
 {
  goto z;
 }
 printf("\nobtained marks in maths = %d",a);
 printf("\nobtained marks in science = %d",b);
 printf("\nobtained marks in ss = %d",c);
 getch();

}