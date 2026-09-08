#include <stdio.h>

int main() {
    int n, i, j;
    int num;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        num = 1;

        // Print spaces for formatting
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        // Print Pascal Triangle values
        for (j = 0; j <= i; j++) {
            printf("%d ", num);
            num = num * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}