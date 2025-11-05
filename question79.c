#include <stdio.h>

int main() {
    int n, i, j;
    int matrix[10][10];

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    printf("\nThe entered matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nDiagonal traversal of the matrix:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]);
    }

    printf("\n");

    return 0;
}
