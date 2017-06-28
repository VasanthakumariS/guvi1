#include<stdio.h>
void main()
{
  int i,j,sum=0,sum1=0;
  for(i=1;i<=15;i++)
  {
    sum=sum+i;
  }
  printf("\n%d",sum);
  for(j=15;j<=45;j++)
  {
    if(j%2!=0)
    {
      sum1=sum1+j;
    }
  }
  printf("\n%d",sum1);
 }
  
