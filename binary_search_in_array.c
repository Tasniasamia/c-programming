#include<stdio.h>
int main(){
  /*  int arr [] = {1,2,3,4,5,6,45,55,56,200};
    int low,mid,high,array_length,number=45;
    array_length=sizeof(arr)/sizeof(arr[0]);
    low=0;
    high=array_length-1;

    while(low<=high){
            mid=(low+high)/2;
            if(arr[mid] == number){
                break;
            }
            if(number<arr[mid]){
                high=mid-1;


            }
            else{
            low=mid+1;

            }


    }
    printf("%d number postion is %d \n",number,mid);*/

  int arr2 [] ={22,10,2,1,2,3,5,6,55,99};
    min=arr2[0];
    int i;
    int array_length2;
    array_length2=sizeof(arr)/sizeof(arr[0]);
    i=0;
    while(i<array_length2){
        if(arr2[i]<min){
            min=arr2[i];
        }


    }

    return 0;
}
