//Write a program to find the product of odd digits of a number.
#include<stdio.h>
int main ()
{
int i , a , b=0, z=1;
printf("enter the number"); 
scanf("%d", &a );
while (a!=0){ 
    i=a%10;
    if (i%2!=0){
    z=z*i;
    i=i/10;
    b=1;}a=a/10;}

{printf("%d", z);}
if(z)
        printf("Product of odd digits = %d\n", z);
else
        printf("No odd digits found.\n");

return 0;
}