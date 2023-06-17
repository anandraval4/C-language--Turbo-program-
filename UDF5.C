#include<stdio.h>
#include<conio.h>
test()
{    int a,b,c;
     printf("a=");
     scanf("%d",&a);

     printf("b=");
     scanf("%d",&b);

     c=a+b;
     return(c);


}
void main()
{

		 int ans;
		 clrscr();
		 ans=test();

		 printf("a+b=%d",ans);
		 getch();




}