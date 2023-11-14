#include<stdio.h>

void ref1(int x[],int s);
main()
{

int arr[10]={0,1,2,3,4,5,6,7,8,9};
ref1(arr,10); // function call which is having parameter as an array

}
void ref1(int x[],int size)
{
int i=0;
for(i=0;i<10;i++)
{
	printf("\n%d",x[i]);
}
}
