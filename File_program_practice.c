#include<stdio.h>
int main(){
FILE*fp_in,*fp_out;
char p[100];
char q[100];
fp_in=fopen("practice_input.txt","w");
if(fp_in == NULL){
    printf("No file here\n");
}
printf("Take input data for p\n");
scanf("%[^\n]",p);
/*printf("Take input data for q\n");
scanf("%s",q);*/
printf("%s\n",p);

printf("printed data\n");
fprintf(fp_in,"%s",p);
//fprintf(fp_in,"%s",q);
fclose(fp_in);
fp_in=fopen("practice_input.txt","r");
if(fp_in != NULL){
printf("File opened successfully\n");
int a, b;
fgets(q,100,fp_in);
sscanf(q,"%d %d",&a ,&b);
printf("%d %d\n",a,b);
printf("sum is %d\n",a+b);
}

return 0;

}
