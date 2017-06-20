#include<stdio.h>
#include<conio.h>
void main()
{
   int n;
   clrscr();
   printf("\n enter a number");
   scanf("%d",&n);
   if(n>=1)
   {
      printf("\n Number is positive");
   }
   else
   {
      if(n<0)
      {
        printf("\n number is negative");
      }
      else
      {
        printf("\n number is zero");
      }
    }
    getch();
 }
