#include<stdio.h>
#include<conio.h>
void ak()
{
	int a,b;
	printf("value of a = ");
	scanf("%d",&a);
	printf("value of b = ");
	scanf("%d",&b);
	if(a>b)            //if(a>b && a>c)  //if(b>a && b>c) //else
	{
		printf("a is greater than b.");
		printf("\na = %d ",a);
	}
	else
	{
		printf("b is greater than a.");
		printf("\nb= %d ",b);
	}

}
void main()
{
	clrscr();
	ak();
	getch();

}