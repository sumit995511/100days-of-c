// Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>

int main() {
    int a, b;
    long long product = 1;   // initialize with 1

    printf("Enter a number:\n");
    scanf("%d", &a);

    for (b = 2; b <= a; b += 2) {
        product *= b;
    }

    printf("The product of even numbers from 1 to %d = %lld\n", a, product);

    return 0;
}
