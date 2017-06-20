#include<stdio.h>
#include<conio.h>
void main()
{
  int n;
  clrscr();
  printf("\n Enter a number");
  scanf("%d",&n);
  if(n%4==0)
  {
      printf("\nIt is a leap year");
  }
  else
  {
      printf("\n Not a leap year");
  }
  getch();
}
