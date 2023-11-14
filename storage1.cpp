#include<stdio.h>
extern int n=9;
int y=8;
void mystatic();
main()
{
   int w;
   static int d;
   register int x=7,m;
   auto int k;
k=y*y;
printf("value of k is %d",k);
m=x*x;
printf("value of m is %d",m);
 mystatic();
 mystatic();
 mystatic();
 printf("\n value of n is %d",n);
}
 void mystatic()
{
	static int j=5;
	printf("\n value of j is %d",j);
	j++;
	printf("\n value of n is %d",n);
	n++;
}

