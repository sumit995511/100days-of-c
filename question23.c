//Write a program to calculate library fine based on late days as follows: 
//First 5 days late: ₹2/day 
//Next 5 days late: ₹4/day 
//Next 20 days days late: ₹6/day 
//More than 30 days: Membership Cancelled.
#include<stdio.h>
int main ()
{
int day , fine , late ;
printf ("enter the days\n");
scanf("%d", &day);
if (day>=1 && day<=5)
{fine = 2*day ;

printf("total fine = %d", fine );}
else if (day>=6 && day<=10)
{fine = (2*5)+(4*(day-5));
printf("total fine = %d",fine);}
else if (day>=11 && day<=30){
    fine = (2*5)+(4*5)+6*(day-10);
    printf("total fine = %d", fine);
}
else{printf("membership cancelled");}

return 0;
}