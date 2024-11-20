#include<stdio.h>
#include<string.h>
void sum(int num){
char str[100]="money";
if(num == 0){
    return ;
}
//int string_length=strlen(str);
int index;
index=num+sum(num-1);
printf("%s",str[index]);



}
int main(){
char word[100];
scanf("%s",word);
printf("%s",sum(4));
//printf("%d\n",sum(n));

}
