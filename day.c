#include<stdio.h>
void main()
{
 char day[100];
 printf("\nenter a day");
 scanf("%s",&day);
 switch(day)
 {
    case "Sunday":
        printf("\nholiday");
        break;
    case "Monday":
        printf("\nworking day");
        break;
    case "Tuesday":
        printf("\nworking day");
        break;
    case  "Wednesday":
        printf("\nworking day");
        break;
    case  "Thursday":
        printf("\nworking day");
     case  "Friday";
        printf("\nworking day");
        break;
      case "Saturday":
          printf("\nHoliday");
          break;
       default:
          printf("\n Days are not given");
      
}
  
