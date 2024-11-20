#include <stdio.h>

int main() {
    int rows = ; // Adjust the size of the pattern here

    // Loop to print the upper triangle part
    for (int i = 1; i <= rows; i++) {
        // Left triangle (incremental)
        for (int j = 1; j <= i; j++) {
            printf("C");
        }

        // Print spaces in the middle
        for (int j = 1; j <= (rows - i) * 2; j++) {
            printf(" ");
        }

        // Right triangle (incremental)
        for (int j = 1; j <= i; j++) {
            printf("C");
        }

        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
