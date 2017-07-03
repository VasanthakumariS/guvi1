#include<stdio.h>
void main()
{
  int a[10],i,greatest;
  printf("\n enter the ten numbers");
  for(i=1;i<=10;i++)
  {
    scanf("%d",&a[i]);
  }
  greatest=a[0];
  for(i=0;i<10;i++)
  {
    if(a[i]>greatest)
    {
      greatest=a[i];
    }
  }
  printf("\n greatest of 10 numbers is %d",a[i]);
 }
