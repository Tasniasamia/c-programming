#include<stdio.h>
#include<string.h>
/*int main(){
char student[100]="Tasnia";
int i;
int string_length=strlen(student);
for(i=string_length-1;i>=0;i--){
  printf("%c",student[i]) ;
}*/
char std[100];

void recurse(int num){

    if(num<0){
    return ;
    }
    printf("%c",std[num]);
    recurse(num-1);
}
int main(){
scanf("%s",std);
int n=(strlen(std))-1;
recurse(n);
return 0;
}



