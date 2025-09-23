// Write a program to calculate the factorial of a number.
#include<stdio.h>
int main ()
{
    int a, b;
    long long factorial = 1;  // initialize to 1

    printf("Enter a number: ");
    scanf("%d", &a);

    for (b = 1; b <= a; b++) {
        factorial *= b;
    }

    printf("Factorial of %d = %lld\n", a, factorial);

    return 0;
}
