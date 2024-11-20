#include<stdio.h>
int main(){

int i,j,row=10;
for(i=1;i<=row;i++){

     for(j=1;j<=i;j++){
        printf("c");
    }
    for(j=1;j<=((row-i)*2);j++){
        printf(" ");
    }
     for(j=1;j<=i;j++){
        printf("c");
    }

    printf("\n");
}

}
