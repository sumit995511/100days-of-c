#include<stdio.h>
int main ()
{
int celcius;
float fahrenheit;   
printf("Enter temperature in celcius: ");
scanf("%d",&celcius);   
fahrenheit=(celcius*9/5)+32;
printf("Temperature in fahrenheit is: %.2f\n",fahrenheit);


return 0;
}