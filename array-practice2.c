#include<stdio.h>

int main() {
    int a[40] = {
        50, 10, 15, 60, 25, 30, 35, 40, 45, 50,
        52, 55, 58, 60, 62, 65, 67, 70, 72, 75,
        77, 80, 82, 85, 87, 90, 92, 95, 97, 100,
        60, 18, 29, 50, 50, 50, 50, 70, 89, 99
    };

    int i, count, j;

    for(i = 10; i <= 100; i++) {
        count = 0;
        j = 39;
        while(j >=0) {
            if(a[j] == i) {
                count++;
            }
            j--;
        }

        if (count > 0) {
            printf("%d students got total %d \n", count, i);
        }
    }

    return 0;
}
