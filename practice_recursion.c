#include<stdio.h>
int recurse(int x,int n){
    if(n==0){
        return 1;
    }
    int powerN=recurse(x,n-1);
   // printf("value=%d\n", x*powerN);
    printf("powerN=%d\n",powerN);
    return x*powerN;
}
int main(){

    printf("%d",recurse(2,5));
    return 0;
}
