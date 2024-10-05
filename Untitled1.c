#include<stdio.h>

int main() {
    // Loop by goto statement
    int num;
    scanf("%d", &num);   // Removed extra space and newline


    label:
      if (num <= 5) {
      printf("%d \n ",num);
      num++;
      goto label;
    }


    //one dimensional array
    printf("One dimensional array ...............\n");

    int arr[5];
    int i ;
    printf("Enter 5 numbers:\n");

    for (i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter numbers are .... \n");


    for(i=0;i<5;i++){
            printf("%d ",arr[i]);

    }



}
