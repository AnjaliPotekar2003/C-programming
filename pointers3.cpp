/*#include<stdio.h>
main()
{
	int a[5];
	int*ptr,i;
	ptr=a;
	
printf("Enter the elements\n");
	for (i=0;i<5;i++)
	{
		scanf("%d",*(ptr+i));
	}
printf("the elements are\n");
	for(i=0;i<5;i++)
	{
		printf("%d",*(ptr+i));
		
	}
	
	
}*/
/*#include<stdio.h>
main()
{
	int a[3]={4,5,8};
	int *ptr[3], i;
for (i=0;i<3;i++)
{
	ptr[i]=&a[i];
}
printf("the elements using pointers are\n");
for (i=0;i<3;i++)
{
	printf("%d \n",*ptr[i]);
	}	
}*/

#include<stdio.h>
main()
{
	int i,*j,**k;
j=&i;
k=&j; 
printf("value of i =%d  value of j=%d  value of k\n",&i,&j,&k);	
	printf("value of j=%d  value of k\n",&i,&*j,&**k);
}

