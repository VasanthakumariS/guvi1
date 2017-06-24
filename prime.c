#include<stdio.h>
void main()
{
  int i=2,n;
  printf("\nenter a number");
  scanf("%d",&n);
  while(i<=n)
  {
    if(i%2==0)
    {
      printf("\n entered number is prime",i);
     }
    i++;
}
if(i==n)
{
   printf("\n number is prime");
}
else
{
  printf("\n number is not prime");
}
}
