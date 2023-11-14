/*#include<stdio.h>

void swap1(int,int);
main()
{
	int a=7,b=9;
	swap1(a,b);	
}
void swap1(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("values of a=%d , b=%d\n",x,y);
}*/
/*#include<stdio.h>
void swap1(int*,int*);
main()
{
	int a=7,b=9;
	printf("before swapping values of a=%d b=%d\n",a,b);
	swap1(&a,&b);
	printf("after swapping in main, values of a=%d b=%d\n",a,b);	
}
void swap1(int *x,int *y)
{
	int temp;
	int *ptemp=&temp;
	*ptemp=*x;
	*x=*y;
	*y=*ptemp;
	printf("values of a=%d , b=%d\n",*x,*y);
}*/

                       //Types of Pointers
/*#include<stdio.h>
main()
{
	int *ptr=NULL;   //null pointer
	printf("value of ptr is %d",ptr);
}*/
#include<stdio.h>
main()
{
	int x=10,b=9;
	char c='A';
	void*ptr;
	
	ptr=&x;
	printf("the value at generic pointer is %d\n",*(int*)ptr);// type casting
	
	ptr=&c;
	printf("the value at generic pointer is %c\n",*(char*)ptr);
	
}

