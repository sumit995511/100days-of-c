//Write a program to display the month name and number of days using switch-case for a given month number.
#include<stdio.h>
int main ()
{
int month;
printf("enter the number between 1 to 12\n");
scanf("%d",&month);
switch (month){
    case 1: printf("janurary\n30days"); break ;
    case 2: printf("feburary\n28days"); break ;
    case 3: printf("march\n30days"); break ;
    case 4: printf("april\n31days"); break ;
    case 5: printf("may\n30days"); break ;
    case 6: printf("june\n31days"); break ;
    case 7: printf("july\n30days"); break ;
    case 8: printf("august\n31days"); break ;
    case 9: printf("september\n30days"); break ;
    case 10: printf("october\n31days"); break ;
    case 11: printf("november\n30days"); break ;
    case 12: printf("december\n31days"); break ;
    default : printf("invalid input");
    
}
return 0;
}