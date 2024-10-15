#include<stdio.h>
int main(){
char str1[]={'b','a','n','g','l','a','\0'};
char str2[]={'d','e','s','h','\0'};
char str3 [100];
int i,k,j,length3;

int length1=sizeof(str1)/sizeof(str1[0]);
int length2=sizeof(str2)/sizeof(str2[0]);
printf("%d /n",sizeof(str1[0]));
for(i=0,j=0;i<length1-1;i++,j++){
    str3[j]=str1[i];

}

for(i=0;i<length2-1;i++,j++){
    str3[j]=str2[i];

}
//length3=sizeof(str3)/sizeof(str3[0]);
//str3[length3-1]='\0';
str3[j]='\0';
printf("%s",str3);
}
