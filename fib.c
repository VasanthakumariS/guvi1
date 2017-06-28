#include<stdio.h>
void main()
{
  int fib=0,a=0,b=1,i;
  for(i=1;i<=10;i++)
  {
    fib=fib+a;
    a=b;
    b=fib;
    printf("\n%d",fib);
  }
}
    
