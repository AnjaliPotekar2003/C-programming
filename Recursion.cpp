#include<stdio.h>
int sum1(int);
main()
{
	int a=10;
	printf("sum is :%d",sum1(a));
}
int sum1(int x)
{
	if (x<=1)
	return 0;
	else
	return x+ sum1(x-1);
	
	
}
