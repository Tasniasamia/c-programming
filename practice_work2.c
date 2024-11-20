#include<stdio.h>
int main(){
    int T,i,N,j,k;
    scanf("%d",&T);
    if(1<=T && T<=25){
    for(i=1;i<=T;i++){
        scanf("%d",&N);
        if(1<=N && N<=80){
            for(j=1;j<=N;j++){
                for(k=1;k<=N;k++){
                    printf("*");
                }
                    printf("\n");



            }
            if(i!=T){
            printf("\n");

            }

        }

    }
}
return 0;
}
