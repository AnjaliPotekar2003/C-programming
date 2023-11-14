#include<stdio.h>
main()
{   
    int digit;
	int n;
	scanf("%d",&n);
	while(n!=0)
	{
		digit=n%10;
		n=n/10;
		n=n/10;
	}
	
	printf("%d",digit);
	
	
}

