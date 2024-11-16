#include <stdio.h>

int main() {
    int n;
         printf("enter number ");
    scanf("%d",&n);
   

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (i % 2 == 0) {
                printf("%c", (char)(j + 64)); // Typecasting to char for alphabets
            } else {
                printf("%d", j); // Printing numbers
            }
        }
        printf("\n");
    }

    return 0;
}
