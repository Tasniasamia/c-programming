#include<stdio.h>
#include<math.h>
int main(){
int arr[1000];
int i,n,j,root;
for(i=2;i<1000;i++){
    arr[i]=1;

}
root=sqrt(1000);
for(i=2;i<1000;i++){
    printf("a[%d] = %d\n",i,arr[i]);

}
printf("-----------------------\n");
for(i=2;i<=root;i++){
    if(arr[i] == 1){
        for(j=2;i*j<=1000;j++){
          arr[i*j]=0;
        }
    }
}

for(i=2;i<1000;i++){
    printf("a[%d] = %d\n",i,arr[i]);

}

  scanf("%d",&n);
  if(arr[n] == 0){
    printf("%d is not prime number \n",n);

  }
  else{
        printf("%d is  prime number \n",n);

  }
  }

