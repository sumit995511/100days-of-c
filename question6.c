#include <stdio.h>
int main() {
    int a, b, c;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("number before swapping:  %d, %d\n", a, b);
    c = a;
    a = b;
    b = c;

    printf("number After swapping:  %d,  %d\n", a, b);

    return 0;
}
