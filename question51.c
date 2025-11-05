#include <stdio.h>

int main() {
    int i, j, k;

    for(i = 5; i >= 1; i--) {       // Outer loop for rows
        for(j = 1; j < i; j++) {    // Print spaces
            printf(" ");
        }
        for(k = i; k <= 5; k++) {   // Print numbers
            printf("%d", k);
        }
        printf("\n");
    }

    return 0;
}
