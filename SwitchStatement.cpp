#include<stdio.h>
main()
{
	int g;
	int a=10,b=5,c;
	printf("enter the int");
	scanf("%d",&g);
	switch(g)
	{
		case 1:
			printf(" your choice is addition");
			c=a+b;
			printf("\naddition is %d",c);
	break;
		case 2:
		     printf("your choice  is b");
	break;
		
		default:
		     printf("your choice is not present");   
		
		
	}
}
