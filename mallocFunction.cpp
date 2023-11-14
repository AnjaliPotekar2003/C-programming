// Malloc function
/*#include<stdio.h>
#include<stdlib.h>
main()
{
	int *p,n,i;
	printf("enter the number of integers");
	scanf("%d",&n);
	p=(int*)malloc(n*(sizeof(int)));
	if(p==NULL)
	{
		printf("no memory");
		exit(1);
	}
	else
	{
		printf("memory allocation was successfull\n");
		printf("enter the values\n");
		for(i=0;i<n;i++)
		{
			scanf("%d",p+i);
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",*(p+i));
	}
}*/
#include<stdio.h>
#include<stdlib.h>
main()
{
	int *p,n,i;
	printf("enter the number of integers");
	scanf("%d",&n);
	p=(int*)calloc(n,sizeof(int));
	if(p==NULL)
	{
		printf("no memory");
		exit(1);
	}
	else
	{
		printf("memory allocation was successfull\n");
		printf("enter the values\n");
		for(i=0;i<n;i++)
		{
			scanf("%d",p+i);
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",*(p+i));
	}
	free(p);
}

