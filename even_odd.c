#include<stdio.h>
int main(){
int T,N;
scanf("%d",&T);
if(1<=T && T<=10){
 for(int i=0;i<T;i++){
    scanf("%d",&N);
    if(1<=N && N<=100000)
    {
        for(int j=1;j<=N;j++){
        if(N%j==0){
            printf("%d\t",j);
        }
    }
    }

}
}


    return 0;
}
