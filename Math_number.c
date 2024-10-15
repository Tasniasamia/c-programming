#include<stdio.h>
int main(){

int arr[50] = {
    50, 55, 60, 62, 64, 67, 68, 70, 72, 73,
    75, 76, 78, 80, 81, 83, 85, 86, 88, 89,
    90, 90, 93, 94, 55, 96, 97, 98, 99, 88,
    50, 52, 53, 54, 56, 57, 58, 59, 61, 63,
    65, 66, 69, 71, 74, 77, 79, 82, 84, 87
};
int arr2[50];
int arr2_length=sizeof(arr)/sizeof(arr[0]);
int i,j,count;

for(i=50; i<=100;i++){
    count=0;
    j=0;
   while(j<50){

    if(arr[j] == i){
    count++;
   }

   j++;
   }
 printf("arr[%d]=%d\n",i,count);
   }






return 0;
}


