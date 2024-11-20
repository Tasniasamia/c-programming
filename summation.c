
#include<stdio.h>

int main(){
 int number,i,number2,stringLength,sum;
 char arr[100];
 scanf("%d",&number);
 if(1<=number && number<=10000){
    for(i=0;i<number;i++){
      scanf("%d",&number2);
       if(10000<=number2 && number2<=99999){
        sprintf(arr, "%d", number2);
        stringLength=strlen(arr);
        int num1=arr[0]-'0';
        int num2=arr[stringLength-1]-'0';
        sum=num1+num2;
        printf("Sum = %d\n",sum);

       }
       else{
        break;
       }
    }
 }


return 0;
}
