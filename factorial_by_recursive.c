#include<stdio.h>
int factorial(int n){
if(n==1){
return ;
}
int num1=factorial(n-1);
printf("n value is %d\n",n);
int num2=n*num1;
return num2;


}
int main(){

printf("%d",factorial(4));

}
