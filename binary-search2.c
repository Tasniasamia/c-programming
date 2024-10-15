#include<stdio.h>
int main(){
    int low,mid,high,number=45;
    low=0;
    high=100;

    while(low<=high){
            mid=low+high/2;

            if(number<mid){
                high=mid-1;


            }
            else if(number>mid){
            low=mid+1;

            }
            else{
            printf("The number is %d \n",mid);
a
            break;
            }

    }
    return 0;
}
