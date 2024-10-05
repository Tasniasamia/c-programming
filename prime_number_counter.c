#include<stdio.h>
int main(){
 int i, count=0;
    int primeCount=0;
    int j=0;
    for(i=1;i<=20;i++){
    while(j<=i){
        if(i%j==0)
        {
            count++;
        }
        j++;
    }

    }
        printf("total prime %d\n",count);

    return 0;}
