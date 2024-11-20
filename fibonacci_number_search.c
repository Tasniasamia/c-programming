#include<stdio.h>
int c;
int fibonacci(int a,int b,int n){

if(n==6){
printf("%d\n",c);
}

c=a+b;
a=b;
b=c;

fibonacci(a,b,n+1);
}
int main(){
int a=0;
int b=1;
int n=2;
fibonacci(a,b,n);
return 0;
}
