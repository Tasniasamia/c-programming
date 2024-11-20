#include<stdio.h>
int main(){

int a[5]={3,1,5,4,2};
int arr[5];
int i,j,k,min,temp,min2;

for(i=0;i<5;i++){
min=20000;

for(j=0;j<5;j++){

if(a[j]<min){
min2=min;
min=a[j];
temp=j;
}

arr[i]=min;
a[temp]=min2;
}
}

for(k=0;k<5;k++){
    printf("%d\n",arr[k]);
}
}


