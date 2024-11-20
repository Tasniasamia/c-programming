#include<stdio.h>
#include<stdlib.h>
int main(){
FILE*fp_in,*fp_out;
int ch;
fp_in=fopen("man1.png","rb");
fp_out=fopen("man2.png","wb");
if(fp_in == NULL){
    perror("No file Exist here");
    return EXIT_FAILURE;
}
while(1){
    ch=fgetc(fp_in);
    if(ch==EOF){
        break;
    }
    fputc(ch,fp_out);
}
fclose(fp_in);
fclose(fp_out);
return 0;
}
