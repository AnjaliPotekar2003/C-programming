#include<stdio.h>
main()
{
	int a[3][3];int b[3][3];int c[3][3];
	int i;
	int j;
	
	for (i=0;i<3;i++)
{
	for (j=0;j<3;j++)
	{
		scanf("%d",&a[i][j]);
		printf("\nEnter the elements %d",a[i][j]);
	}
}

	for (i=0;i<3;i++)
{
	for (j=0;j<3;j++)
	{
		scanf("%d",&b[i][j]);
		printf("\nEnter the elements %d",b[i][j]);
	}
}
}
