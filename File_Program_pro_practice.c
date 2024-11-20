#include<stdio.h>
int main(){
FILE*fp;
fp=fopen("mypractice.txt","w");
fprintf(fp,"My name is Tasnia Sharin \n");
fprintf(fp,"My age %d \n", 23);
fprintf(fp,"MY Life , My Rules in %d\n",2024);
fprintf(fp, "In %d I will become pro\n",2025);
fclose(fp);
return 0;
}
