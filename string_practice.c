#include<stdio.h>
int main(){
int length,i;
char arr2[100];
int getLength(char arr[]){
      i=0;
     length=0;

    while(arr[i] != '\0'){
        length++;
        i++;

    }
    return length;
}

while(1 == scanf("%s",arr2)){
    int stringLength=getLength(arr2);
    printf("%d",stringLength);
}



return 0;

}
