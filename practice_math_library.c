#include<stdio.h>
#include<math.h>

int main(){
    int count=0;
/*int n=5;
printf("%d",pow(n,2));*/

int sum(int N){
    count++;

if(N == 1){
    return 1;

}
int sumnum1=sum(N-1);
int total=sumnum1+N;
return total;
}

printf("sum=%d\n",sum(5));
printf("count number is %d\n",count);


}
