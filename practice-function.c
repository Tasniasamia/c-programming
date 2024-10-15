
#include<stdio.h>
int main(){
    double pi;
    int myfunc(){
    pi=3.1416;
    return ;
    }

    //int area =pi*(2)^2;
    myfunc();
    //printf("%lf",pi);





    //maximum , minimum , sum and average number

    int max, min , sum, avg,i;
    sum=0;
    int arr [] = {1,2,3,4,5,6,7,8,9,10};
    int array_length=sizeof(arr)/sizeof(arr[0]);

    void problem(int arr[], int array_length){
    max=arr[0];
    for(i=0;i<array_length;i++){
        if(arr[i]>max){
            max=arr[i];
        }
                    sum=sum+arr[i];


    }
    return (max,sum);

    }
    problem(arr,array_length);

    printf("max is %d \n",max);
    printf("sum is %d \n",sum);

    return 0;

}
