#include<stdio.h>
//Write a program to input an integer and check whether it is even or odd using if–else.
int main ()
{int n ;
    printf("enter the number");
    scanf("%d" , &n);
    if (n%2 == 0) 
    {printf("%d is even number\n", n );}

    else{ 
        printf("%d is odd number\n", n );
    
    }

return 0;
}