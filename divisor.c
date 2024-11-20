#include<stdio.h>
int main(){
int number,i,num,j;
scanf("%d",&number);
int arr[number];
for(i=0;i<number;i++){
    scanf("%d",&num);
    arr[i]=num;
}
for(int k=0;k<number;k++){
    for(j=1;j<=arr[k];j++){
        if(arr[k]%j==0){
        printf("%d ",j);

        }
    }
    printf("\n");
}


    return 0;
}
