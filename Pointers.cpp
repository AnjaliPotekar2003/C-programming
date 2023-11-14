/*#include<stdio.h>
main()
{
	int a=6;
	int *aptr;
	aptr= &a;
	printf("value of a is %d\n",a);
	printf("address of a is %u\n",&a);
	printf("address of aptr pointer is %u\n",&aptr);
	printf("what address is held by pointer aptr %u\n",aptr);
	printf("the value of aptr is %d\n",*aptr);
}
*/
#include<stdio.h>
main()
{
	/*int*nptr;
	char*cptr;
	float*fptr;
	
printf("size of int pointer is %d",sizeof(nptr));
printf("\nsize of char pointer is %d",sizeof(cptr));
printf("\nsize of float pointer is %d",sizeof(fptr));
*/
int i,n,fact=1;
int *pn,*pfact;
pn=&n;
pfact=&fact;
*pn=5;
//scanf("%d",pn)
for(i=1;i<=*pn;i++)
{
	*pfact=*pfact*i;
}
printf("the factorial value is %d",*pfact);






}
