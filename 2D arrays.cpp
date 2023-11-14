 /*#include<stdio.h>
 main()
 {
 	int i,j;
 	int a[2][2]={{1,2},{3,4}};
 	int a1[2][2]={2,3,4,5};
 	int a2[2][2]={{1},{3,4}};
 	int a3[2][2]={0};
 	int a4[][2]={1,2,3};
 	printf("show the arrays\n");
 	
for (i=0;i<2;i++)
{
    for (j=0;j<2;j++)
    {
	
 	printf("\n%d",a4[i][j]);
}
 	printf("\n");
 	
}
}*/
#include<stdio.h>
 main()
 {
 	int i,j;
 	int a[2][2];
 	int b[2][2];
 	int c[2][2];
 	printf("enter the elements in 1 array\n");
for (i=0;i<2;i++)
{
	for(j=0;j<2;j++)
{
scanf("%d",&a[i][j]);
printf("enter the elements in 2 array\n");
}
for (i=0;i<2;i++)
{
	for(j=0;j<2;j++)
{
scanf("%d",&b[i][j]);
for (i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		c[i][j]=a[i][j]+b[i][j];
	}
	printf("the elements of the array c\n");
}
}
}
}
}
