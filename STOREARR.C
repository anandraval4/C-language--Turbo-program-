#include<stdio.h>
#include<conio.h>
void main()
{
	int a[8],b,c=0;
	clrscr();
	printf("enter any value = ");

	for(b=0;b<=7;b=b+1)
	{
	 scanf("%d",&a[b]);
	 c=c+a[b];

	}

	 printf("\n");
	printf("total = %d",c);
	printf("\n");
	getch();



}