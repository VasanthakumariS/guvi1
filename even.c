#include<stdio.h>
#include<conio.h>
void main()
{
  int n;
  clrscr();
  printf("\nEnter a number");
  scanf("%d",&n);
  if(n%2==0)
  {
    printf("\n It is a even number");
  }
  else
  {
    printf("\n It is a odd number");
  }
  getch();
}
