#include<stdio.h>
int main(){
int number,i,j,k,n,m;
scanf("%d",&number);
int identify_Number(int num)
{
    if(num<=25 && num>=1){
        return 1;
    }
    else{
        return 0;
    }


}

if(identify_Number(number) == 1){
    for(i=1;i<=number;i++){
    scanf("%d",&n);

     if(n<=80 && n>=1){
        for(k=1;k<=n;k++){
           for(m=1;m<=n;m++){
            printf("*");
           }
           printf("\n");
        }
     }
     else{
        break;
     }
}
}
else{
    printf("Number range is larger than 25 \n");
}
return 0;
}
