#include<stdio.h>
main()
{
  int a=2, b=10;// a=000000010 , b=0000100
  printf("a&b =%d",a&b);
  printf("\n a||b =%d",a||b);
  printf("\n a^b =%d",a^b);
  printf("\n left shift a<<1 =%d",a<<2);
  printf("\n right shift b>>1 =%d",b>>10);
}
