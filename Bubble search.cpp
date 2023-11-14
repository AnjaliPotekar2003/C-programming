#include<stdio.h>
main()
{
int hold;
int i;
int j;
int n=6;
int a[6]={5,3,1,2,6,7};
 for(i=0;i<n-1;i++)
 {
 	for(j=0;j<n-i-1;j++)
 	{
 	if (a[j]>a[j+1])
 	     {
 	     	hold=a[j];
 	     	a[j]=a[j+1];
 	     	a[j+1]=hold;
 	     	
 	     	
	     }
	 	
	}
 	
 }
    for (i=0;i<n;i++)
    {
    	printf("\t %d",a[i]);
	}
	
	
	
}
