#include<stdio.h>
int main(){
int i,j,num1,num2,num11,num22,roll,num111,num222,number=0;
char math[1000],bangla[1000],english[1000];
FILE*mathfile,*banglafile,*englishfile,*student;
mathfile=fopen("math.txt","r");
banglafile=fopen("bangla.txt","r");
englishfile=fopen("english.txt","r");
student=fopen("student.txt","w");
if(mathfile == NULL){
    printf("No file exist here");
}
else{
    printf("file opened successfully");
}
for(i=0;i<10;i++){
     fgets(math,100,mathfile);
     sscanf(math,"%d %d",&num1,&num2);
     fgets(bangla,100,banglafile);
     sscanf(bangla,"%d %d",&num11,&num22);
     fgets(english,100,englishfile);
     sscanf(english,"%d %d",&num111,&num222);
     number=num2+num22+num222;
     fprintf(student,"roll number is  %d and mark is %d\n",i+1,number);
     printf("number %d is %d\n",i+1,number);
}
return 0;
}
