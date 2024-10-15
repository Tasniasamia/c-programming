#include<stdio.h>
#include<string.h>
int main(){
char arr[10002], arr2[100];

gets(arr);
int string_length=strlen(arr);
printf("%d\n",string_length);
int i,j,is_word=0;
for(i=0,j=0;i<string_length;i++){

    if(arr[i]>='A' && arr[i]<='Z'){
        if(is_word == 0){
            is_word=1;
            arr2[j]=arr[i];
            printf("%c",arr2[j]);
            j++;

        }
        else{
            arr2[j]=arr[i];
            printf("%c",arr2[j]);
            j++;
        }
    }
     else if(arr[i]>='a' && arr[i]<='z'){
        if(is_word == 0){
            is_word=1;
            arr2[j]=('A'+ arr[i]-'a');
            printf("%c",arr2[j]);

            j++;

        }
        else{
            arr2[j]=arr[i];
            printf("%c",arr2[j]);
            j++;
        }
    }
     else if(arr[i]>='0' && arr[i]<='9'){
        if(is_word == 0){
            is_word=1;
            arr2[j]=arr[i];
            printf("%c",arr2[j]);

            j++;

        }
        else{
            arr2[j]=arr[i];
            printf("%c",arr2[j]);
            j++;
        }
    }
    else{
        if(is_word == 1){
            is_word=0;
            arr2[j]='\0';
            printf("\n");
            j=0;
        }
    }
}



}
