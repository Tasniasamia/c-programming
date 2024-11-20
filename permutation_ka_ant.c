#include<stdio.h>
int swap(int*a,int*b){
int c;
c=*a;
*a=*b;
*b=c;

return a,b;

}
int permutation(int arr[3],int start,int end){
    if(start == end){
       for(int i=0;i<=end;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
        return;
    }
    else{
       for(int i=start;i<=end;i++){

   swap(&arr[start],&arr[i]);
   permutation(arr,start+1,end);

    }


    }

}
int main(){
int arr[3]={1,2,3};
int start=0;
int end=2;
permutation(arr,start,end);
return 0;

}
