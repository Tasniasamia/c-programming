#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main(){
char arr[1000];
scanf("%s",&arr);
int i,j,k,l,m,bit,bit2;
double decimal=0.0;

i=0;
while(arr[i]!= '.'){
    printf("%d\n",i+1);
    i++;
}


for(j=0,k=i-1;j<arr[j]!='.',k>=0;j++,k--){


     bit=arr[j]-'0';
     decimal+=bit*(pow(2,k));


}

int string_length=strlen(arr);
for(l=j+1,m=1;l<string_length;l++,m++){
     bit2=arr[l]-'0';
    decimal+=bit2*(pow(2,(-m)));
    printf("array number is %d\n",l);
}
printf("%lf\n",decimal);


return 0;
}
