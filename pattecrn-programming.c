#include<stdio.h>
int main(){
  int i,j,k,l;

    int row=10;

    for(i=0,l=10;i<10,l>0;i++,l--){
        for(j=0;j<i;j++){
            printf(" ");
        }
        for(j=0;j<l;j++){
            printf("c");

        }


        printf("\n");

    }
 if(i==10 && l==0){
     for(i=8,l=2;i>0,l<10;i--,l++){
        for(j=0;j<i;j++){

            printf(" ");
        }
        for(j=0;j<l;j++){

            printf("c");

        }


        printf("\n");

    }
 }

    return 0;
}
