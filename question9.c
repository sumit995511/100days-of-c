#include<stdio.h>
#include<math.h> 
//Write a program to calculate simple and compound interest for given principal, rate, and time.


int main ()

{
float principal , rate , time
, simpleintrest , compoundInterest , amount ;
printf("enter the princial amount\n");
scanf("%f", &principal);
printf("enter the rate of intrest\n");
scanf("%f", &rate);

printf("enter the time in years\n");
scanf("%f", &time);

simpleintrest= (principal*rate*time)/100 ;
printf("the SI is %f\n" , simpleintrest);
 
amount = principal * pow((1 + rate / 100), time);

    compoundInterest = amount - principal;

    printf("Compound Interest = %.2f\n", compoundInterest);
    printf("Total Amount = %.2f\n", amount);

return 0;
}