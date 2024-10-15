#include<stdio.h>
int main(){
char country[] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h', '\0'};
char country2[100];
int i,j;

int array_length=sizeof(country)/sizeof(country[0]);


for(i=0,j=0;i<array_length,j<array_length;i++,j++){
    if(country[i]>=97 && country[i]<=122)
    {
        country2[j]='A'+(country[i]-'a');
    }
    else{
       country2[j]=country[i];
    }
}
printf("%s \n",country2);
return 0;

}
