#include<stdio.h>
main()
{
int a[50],n,beg,last,mid,i,key,loc=-1;
n=7;
key=5;
beg=0;
last=n-1;
   for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}  
    while(beg<=last)
{
	mid=(beg+last)/2;
	if (a[mid]==key)
	{
		loc=mid;
		break;
	}
	else if(a[mid]>key)
	{
		last=mid-1;
	}
	else if(a[mid]<key)
	{
		beg=mid+1;
	}
	if(loc=-1)
	{
		printf("element found %d",loc+1);
	}
	else
	{
		printf("element not found");
	}
}
}
