#include<stdio.h>
//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
int main ()
{ int n ; 
    printf("enter the number");
    scanf("%d", &n );
    if (n >= 0) {
        if (n==0) 
        {printf("its a zero");
        } else{
            printf("the number is positive");
        
        }} else{
            printf("the number is negative");
        
    }

return 0;
}