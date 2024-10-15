#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main(){
int number=45;
char arr[1000];
int i=0;
i=0;
while(number!=0){
printf("number is %d\n",number);
if(number%2==0){
    arr[i]='0';
}
else{
    arr[i]='1';
}
number/=2;
i++;
}
printf("%s",arr);
}
