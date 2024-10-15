#include<stdio.h>
int main(){
    int t,i,n,j,m;
    int arr[1000],arr2[1000];
    printf("Please Input number\n");
    scanf("%d",&t);
    m=0;
    while(m<t) {
        scanf("%d",&n);
        printf("Enter Number %d \n",n);
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                printf("*");
            }
        printf("\n");

        }
     m++;
    }



}
