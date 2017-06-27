#include<stdio.h>
#include<math.h>
void main()
{
  int i,n;
  printf("\nenter a number");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    if(i%2==0)
    {
      printf("\n%d",i);
    }
  }
  getch();
}
  
