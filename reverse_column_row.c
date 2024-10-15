#include<stdio.h>
int main(){
int arr[5][5]={{6,3,8,2,4},{4,7,6,4,1},{7,1,4,2,6},{8,9,2,5,7},{9,9,7,9,3}};
int arr2[5][5];
int i , j;
for(i=0;i<5;i++){
for(j=0;j<5;j++){


    arr2[j][i]=arr[i][j];
}

}

for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        printf("%d\t",arr2[i][j]);
    }
    printf("\n");
}
return 0;

}
