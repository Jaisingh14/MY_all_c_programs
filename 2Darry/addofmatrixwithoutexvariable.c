#include <stdio.h>

int main() {
    int a[2][2], b[2][2];
    int i, j;

    // Input elements for the first matrix
    printf("Enter elements of 1st matrix (2x2):\n");
    for (i = 0; i < 2; ++i)
        for (j = 0; j < 2; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    // Input elements for the second matrix
    printf("Enter elements of 2nd matrix (2x2):\n");
    for (i = 0; i < 2; ++i)
        for (j = 0; j < 2; ++j) {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }

    // Adding the two matrices and storing the result in the first matrix
    for (i = 0; i < 2; ++i)
        for (j = 0; j < 2; ++j) {
            a[i][j] += b[i][j];
        }

    // Printing the result
    printf("\nSum of the two matrices:\n");
    for (i = 0; i < 2; ++i)
        for (j = 0; j < 2; ++j) {
            printf("%d   ", a[i][j]);
            if (j == 1) {
                printf("\n");
            }
        }

    return 0;
}
