#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	x:

	printf("Enter math marks");
	scanf("%d",&a);

	if(a>100){

	goto x;

	}
	else if(a<0){
	goto x;

	}
	y:
	printf("\nEnter phy marks");
	scanf("%d",&b);

	if(b>100){

	goto y;

	}
	else if(b<0){
	goto y;

	}
	z:
	printf("\nEnter chem marks");
	scanf("%d",&c);

	if(c>100)
	{
	goto z;

	}
	else if(c<0)
	{
	goto z;

	}
	printf("\nMarks of math is %d",a);
	printf("\nMarks of phy is %d",b);
	printf("\nMarks of chem is %d",c);



	getch();
}