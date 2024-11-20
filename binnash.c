#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void permute(int arr[], int l, int r) {
    if (l == r) {
        // সমস্ত উপাদানের একটি বিন্যাস তৈরি হয়েছে, তাই এটি প্রিন্ট করুন
        for (int i = 0; i <= r; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        for (int i = l; i <= r; i++) {
            swap(&arr[l], &arr[i]); // উপাদানগুলো বিনিময় করুন
            permute(arr, l + 1, r); // পরবর্তী উপাদানে যান
        }
    }
}

int main() {
    int arr[10];

    // ব্যবহারকারীর কাছ থেকে 10টি পূর্ণসংখ্যা ইনপুট নিন
    printf("10 টি পূর্ণসংখ্যা প্রবেশ করুন:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("এগুলোর বিন্যাস:\n");
    permute(arr, 0, 9); // বিন্যাস বের করুন

    return 0;
}
