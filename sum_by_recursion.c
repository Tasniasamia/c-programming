#include<stdio.h>
int sum(int n){
 if(n == 1){
 return 1;
 }
 int sumnum1=sum(n-1);
 int total=sumnum1+n;
 return total;
}
int main(){
printf("%d",sum(5));
}
