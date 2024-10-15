#include<stdio.h>
#include<math.h>
int main(){

char a[7][100]={"bangladesh","India","Pakistan","Sri Lanka","Nepal","Bhutan","Maldives"};

int i,j,str_length;
for(i=0;i<7;i++){
        str_length=strlen(a[i]);
        for(j=0;j<str_length;j++){
               printf("%c ",a[i][j]);

        }
printf("\n");
}
return 0;

}
