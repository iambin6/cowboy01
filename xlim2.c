#include <stdio.h>

int main() {
    int rows, i, j, space, num;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Handle invalid input (number of rows should be positive)
    if (rows <= 0) {
        printf("Invalid input: Number of rows should be positive.\n");
        return 1;
    }

    // Loop to print the upper part of the pattern
    for (i = 1; i <= rows - 1; i++) {
        // Print leading spaces
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // Print numbers in increasing order with a single space
        for (num = 1; num <= i; num++) {
            printf("%d ", num);
        }

        printf("\n");
    }

    // Loop to print the lower part of the pattern (excluding the middle row if the number of rows is odd)
    for (i = rows - (rows % 2); i >= 1; i--) {
        // Print leading spaces
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // Print numbers in decreasing order with a single space
        for (num = i; num >= 1; num--) {
            printf("%d ", num);
        }

        printf("\n");
    }

    return 0;
}
