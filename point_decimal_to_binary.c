#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main(){
char arr[]="45.03";
char arr2[100];
char arr4[100];
char arr5[100];
int i,k,l,number;
float float_number;
int string_length=strlen(arr);

for(i=0;arr[i]!='.';i++){
    if(arr[i]!='.'){
        arr2[i]=arr[i];
    }

}

//printf("after point %c\n",arr4);
//before point part
number=atoi(arr2);
char arr3[1000];
int j=0;

while(number!=0){
printf("number is %d\n",number);
if(number%2==0){
    arr3[j]='0';
}
else{
    arr3[j]='1';
}
number/=2;
j++;
}

printf("%s\n",arr3);

//after point part
printf("i length is %d\n",i);

for(k=i,l=0;k<string_length;k++,l++){
arr4[l]=arr[k];
printf("float number is %c\n",arr4[l]);
}
printf("float number is %s\n",arr4);

float_number=atof(arr4);

char arr6[100];
    int num = 0;
    while (float_number > 0 && num<8) { // Limiting to 8 bits for demonstration
        float_number *= 2;
        if (float_number >= 1) {
            arr6[num] = '1';

        } else {
            arr6[num] = '0';
        }
        num++;
    }
    arr6[num] = '\0';
    printf("%s after point",arr6);

    char arr7[1000];
    char arr8[1000]=".";
    strcat(arr3,arr8);
    strcat(arr3,arr6);
    printf("binary is %s \n",arr3);
return 0;

}





