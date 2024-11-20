#include<stdio.h>
int main(){
int arr1[5]={3,1,2,5,4};
int arr2[5];
int i,j,k,l,min2,temp_index,temp;
for(j=0;j<5;j++){

 int min= 2147483647;

for(i=0;i<5;i++){

if(arr1[i]<min){
    temp=min;
    min=arr1[i];
   temp_index=i;

   }
arr1[temp_index]=temp;
arr2[j]=min;

}

    printf("%d\n",arr2[j]);
}

}
