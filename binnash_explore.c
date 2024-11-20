#include <stdio.h>

int main() {
    // Our three numbers
    int num1 = 1;
    int num2 = 2;
    int num3 = 3;
    int count = 0;  // To count how many arrangements we find

    printf("Starting to find arrangements of numbers: %d, %d, %d\n", num1, num2, num3);
    printf("------------------------------------------------\n\n");

    for(int first = 1; first <= 3; first++) {
        printf("DEBUG: Trying %d in first position\n", first);

        for(int second = 1; second <= 3; second++) {
            printf("  DEBUG: Trying %d in second position\n", second);

            for(int third = 1; third <= 3; third++) {
                printf("    DEBUG: Trying %d in third position\n", third);

                // Check if all numbers are different
                if(first != second && second != third && first != third) {
                    count++;
                    printf("    SUCCESS! Found arrangement #%d: %d %d %d\n",
                           count, first, second, third);
                } else {
                    printf("    SKIP: Numbers must be different (%d,%d,%d)\n",
                           first, second, third);
                }
                printf("    ------------------------\n");
            }
            printf("  Finished trying all third numbers\n\n");
        }
        printf("Finished trying all second numbers\n\n");
    }

    printf("Total arrangements found: %d\n", count);

    return 0;
}
