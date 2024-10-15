#include<stdio.h>
#include<string.h>

int main(){
    char arr[1000];
    gets(arr);
    //printf("%d",strlen(arr));
    int i;
    if(arr[0])
    for(i=0;i<strlen(arr);i++){
        if((arr[i]>=65 && arr[i]<=90) || (arr[i]>=95 && arr[i]<=122)){
                    printf("%c\n",arr[i]);

        }
        else{
            continue;
        }
    }
}
