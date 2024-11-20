#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
int T ,i ,N ,j,arr_length,count;
scanf("%d",&T);
char arr[100];

if(1<=T && T<=100){
for(i=1;i<=T;i++)
{
        count=0;

    scanf("%s",arr);
    arr_length=strlen(arr);

  for(j=0;j<arr_length;j++){

    if(arr[j] != 32){
    printf("%d\n",arr[j]);
    count++;
    }
    }

}
    printf("count is %d\n",count);

}

return 0;
}
