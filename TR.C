#include<stdio.h>
#include<conio.h>
void main()
{
		int a[10];
		int b,c;
		clrscr();

		for(b=0;b<=9;b=b+1)
		{

		    printf("Enter any number");
		    scanf("%d",&a[b]);


		    if(a[b]>a[10])
		    {
		       c=a[b];

		    }

		}
		printf("%d",c);

		getch();







}