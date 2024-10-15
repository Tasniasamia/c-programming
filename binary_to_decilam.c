#include<stdio.h>
#include<string.h>
#include<math.h>
#include <stdlib.h>
//Conver blnary to decimal
int main(){
int i,j;
char arr [] ="10100";
int decimal=0;
int string_length=strlen(arr);
for(i=0,j=string_length-1;i<string_length,j>=0;i++,j--){
                int bit = arr[i] - '0';

    decimal+=bit*(pow(2,j));

}

printf("Decimal is %d\n",decimal);


return 0;

}

