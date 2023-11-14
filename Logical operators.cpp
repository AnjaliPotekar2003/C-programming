#include<stdio.h>
main()
{
	int a=5 ,b=5 ,c=10 ,d,e,f;
	d=(a==b)&&(c>d);  // and operation
	
	printf("the (a==b)&&(c>d)= %d",d);
	
	e=(a==b)||(c>b); // or operation
	printf("the (a==b)||(c>d)= %d",e);
	
	f=!(a==b);     // not operation
	printf("the (a!==b)= %d",f);
}
