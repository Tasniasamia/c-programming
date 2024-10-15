#include<stdio.h>
int main(){

int arr[10] ={1,2,3,4,5,6,7,8,9,10};
int i,j,arr2[10];
int array_length=sizeof(arr) / sizeof(arr[0]);
for(i=array_length-1 , j=0;i>=0,j<10;i--,j++){
        arr2[j]=arr[i];
        printf("%d ",arr[i]);

}
printf("\n");

for(int k=0;k<10;k++){
    printf("%d  ",arr2[k]);
}

printf("\n");
return 0;

}

