#include<stdio.h>
#include<limits.h>
int main(){

int a[3][4];
int i,j,min,max;
int sum=0;
 for(i=0;i<3;i++){
    for(j=0;j<4;j++){
        scanf("%d",&a[i][j]);
    }
 }


 for(i=0;i<3;i++){
  max = a[i][0];      // Initialize max to the first element of the row
        min = a[i][0];      // Initialize min to the first element of the ro
     for(j=0;j<4;j++){
      sum+=a[i][j];
      if(max<a[i][j]){
        max=a[i][j];
      }
      if(min>a[i][j]){
        min=a[i][j];
      }
      printf("%d",a[i][j]);
     }
    printf("\n");
    printf("row wise max %d \n",max);
    printf("row wise min %d \n",min);
    printf("row wise avg %d \n",sum/4);


 }
}
