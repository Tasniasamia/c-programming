#include<stdio.h>
int count=0;
int factorial(int n){
count++;
if(n==1){
return 1;}
return n*factorial(n-1);
}
int main(){

printf("%d\n",factorial(5));
printf("count number is %d\n",count);
}
