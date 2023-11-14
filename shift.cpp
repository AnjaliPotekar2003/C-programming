#include<stdio.h>
main()
{
	int a[5]={2,4,5,6,7};
	int n=5;
	int i=0;
	int index = 3;
	int value = 7;
	printf("\n print the elements");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}	
	for(i=n;i>=index;i--)
	{
		a[i+1]=a[i];
	}
	n++;
	a[index]=value;
	printf("\n print the elements");
for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}

for(i=index;i>=n-1;i++)
	{
		a[i]=a[i+1];
	}		
    n--;
	printf("\n print the elements");	
}
