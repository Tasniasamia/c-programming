#include<stdio.h>
int main(){
FILE*fp;
char filename[]="myfile.txt";
fp=fopen(filename,"w");
fprintf(fp,"This is a file which is created by program");
fprintf(fp,"I am so happy");
fclose(fp);
return 0;
}
