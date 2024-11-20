#include<stdio.h>
int main(){
FILE*fp_in,*fp_out;
fp_in=fopen("man1.png","rb");
fseek(fp_in,0,SEEK_END);
printf("%d",ftell(fp_in));
}
