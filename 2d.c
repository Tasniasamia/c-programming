#include<stdio.h>
int main(){
 int a[2][3];
 int i,j,max,min;
 int sum=0;
 for(i=0;i<2;i++){
    for(j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
 }
 max=a[0][0];
 min=a[0][0];
  for(i=0;i<2;i++){
    for(j=0;j<3;j++){
        sum+=a[i][j];
        if(max<a[i][j])
        {
            max=a[i][j];
        }
        if(min>a[i][j]){
            min=a[i][j];
        }
                printf("%d ",a[i][j]);

    }
     printf("\n");


}
     printf("max %d \n",max);
     printf("min %d \n",min);
     printf("avg %d \n",sum/6);


}
