#include<stdio.h>
#include<conio.h>
void main()
{ 
  int n,i=9;
  printf("\n enter a number between 1 to 9");
  scanf("%d",&n);
  if(1<=n&&n<=i)
  {
      printf("\n%d",n);
  }
  else
  {
      printf("\nU entered number is not in range");
  }
  getch();
}
