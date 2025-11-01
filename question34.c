//Write a program to check if a number is prime.
#include <stdio.h>
int main()
{  int a, i, b = 1; 

printf("Enter the number: ");
scanf("%d", &a);

if (a <= 1) {
    b = 0;
} else {
    for (i = 2; i < a; i++) {
        if (a % i == 0) {
            b = 0;
            break;
        }
    }
}

if (b)
    printf("%d is a prime number.\n", a);
else
    printf("%d is not a prime number.\n", a);

return 0;}