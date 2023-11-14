#include<stdio.h>
void print1()
{
	extern int x;
	printf("value is %d",x);
    x=x+10; 
}
