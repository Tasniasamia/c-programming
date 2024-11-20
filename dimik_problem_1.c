#include<stdio.h>
int main(){
    int number,i,j;
    printf("Enter the number \n");
    scanf("%d",&number);
        int arr[number];

    for(i=0;i<number;i++){
        scanf("%d",&arr[i]);
    }
    for(j=0;j<number;j++){
        if(arr[j]%2 == 0 ){
            printf("even\n");
        }
        else{
         printf("odd\n");

        }
    }
}
