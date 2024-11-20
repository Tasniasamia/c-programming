#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
FILE*fp;
int ch;
fp=fopen("int.txt","r");
if(fp == NULL){
    perror("File is not opened successfully");
    return EXIT_FAILURE;
}
while((ch=fgetc(fp))!= EOF){
 /* if(ch =='C'|| ch =='D' || ch =='E'){continue;}*/
 if(fseek(fp,3,SEEK_CUR)){continue;}
        printf("%c",ch);




}




}
