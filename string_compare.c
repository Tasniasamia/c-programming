#include<stdio.h>
int main(){

int compare_string(char arr[],char arr2[]){
int i , j,sum,sum2;
sum=1;
sum2=1;

for(i=0,j=0;arr[i]!='\0' && arr2[j]!='\0';i++,j++){
   sum=sum*arr[i];
   sum2=sum2*arr2[j];
  // printf("%d",arr[i]);
}
if(sum > sum2){
    return 1;
}
else if(sum < sum2){
    return -1;
}
else{
    return 0;
}

return sum;

}


 char arr[100] , arr2[100];
 char arr3[]="aaa";
 char arr4[]="aab";

 printf("Enter first array\n");
 scanf("%s",arr);
 printf("Enter second array\n");
 scanf("%s",arr2);

 printf("Enter third array\n");

int result=compare_string(arr,arr2);
 printf("%d",result);




}
