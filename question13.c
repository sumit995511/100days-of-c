//Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include<stdio.h>
int main ()
{int y ;
    printf("enter the year");
    scanf("%d",&y);
    if (y%4==0) {printf("%d is leap year" , y);
    } else {printf("%d is not a leap year\n",y);}

return 0;
}