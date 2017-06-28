#include<stdio.h>
void main()
{
 char day;
 printf("\nenter a day");
 scanf("%c",&day);
 switch(day)
 {
    case 'S':
        printf("\nholiday");
        break;
    case 'M':
        printf("\nworking day");
        break;
    case 'T':
        printf("\nworking day");
        break;
    case  'W':
        printf("\nworking day");
        break;
    case  'H':
        printf("\nworking day");
    case  'F':
        printf("\nworking day");
        break;
    case 'A':
          printf("\nHoliday");
          break;
     default:
          printf("\n Days are not given");   
}
}
  
