#include<stdio.h>
#include<conio.h>
void main()
{
  char a;
  printf("\n Enter a character:";
  scanf("%c",&a);
  if(a=='a'||a=='A'||a=='e'||a=='E'||a=='i'||a=='I'||a=='o'||a=='O'||a=='u'||a=='U')
  {
    printf("\n Entered character is a vowel");
  }
  else
  {
    printf("\nNot a vowel");
  }
  getch();
 }
