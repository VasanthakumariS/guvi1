#include<stdio.h>
void main()
{ 
  int n,r,sum=0.temp;
  prinft("\n enter a number");
  scanf("%d",&n);
  temp=n;
  while(n!=0)
  {
    r=n%10;
    n=n/10;
    sum=sum+(r*r*r);
  }
  if(sum==n)
  {
    printf("\n Given number is a armstrong number");
  }
  else
  {
    printf("\n Given number is not a armstrong number");
  }
  getch();
}
