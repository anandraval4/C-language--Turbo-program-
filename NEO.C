#include <stdio.h>
#include <conio.h>
void main()
{
	int a,b,c,d;
	clrscr();

	printf("Enter any number");
	scanf("%d",&a);

	printf("\nEnter any number");
	scanf("%d",&b);

	printf("\nEnter any number");
	scanf("%d",&c);


	switch(c)
	{

	case 1:  printf("\n a+b=%d",a+b);
		 break;

	case 2: printf("\n a-b=%d",a-b);
		break;

	case 3: printf("\n a*b=%d",a*b);
		break;

	case 4: printf("\n a/b=%d",a/b);
		break;

	case 5:
	d=a%b;

	 printf("\n mod g b=%d",d);
		break;

	default:
	printf("\nOut of choice");
	}

	getch();

}