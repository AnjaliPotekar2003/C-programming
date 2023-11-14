#include<stdio.h>

main()
{
	int a[5]={1,2,3,4,5};
	int i,loc=-1,key,n=5;   // n = number of elements
	
key=3;  // value which to be searched
    for(i=0;i<n;i++)
    {
    	if (a[i]==key)
    	{
    		loc=i;
    		//break;
    		printf("%d",i+1);
		}
    	if(loc!=-1)
    	{
		printf("\n element found",loc+1);
		}
		else
		{
			printf("\n element not found");
		}
	}
}
