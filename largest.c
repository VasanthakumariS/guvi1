#include<stdio.h>
void main()
{
  int a,b,c;
  printf("\nenter the three numbers");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b&&a>c)
  {
     printf("\n a is the largest number");
     else if(b>c)
     {
        printf("\n b is the largest number");
        else
        {
          printf("\nc is the largest number");
        }
     }
  }
 }
