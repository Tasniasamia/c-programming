#include<stdio.h>
int main(){
int a,b,c,i;
int number;
printf("Enter the number\n");
scanf("%d",&number);
for(i=0;i<number;i++)
{
scanf("%d %d %d",&a,&b,&c);
if(a>b){
  if(a>c){
    if(b>c){
        printf("%d %d %d\n",a,b,c);
    }
    else{
        printf("%d %d %d\n",a,c,b);
    }
  }
}
  else if(c>a){
    if(c>b){
        if(a>b){
            printf("%d %d %d",c,a,b);
        }
        else{
        printf("%d %d %d",c,b,a);

        }
    }
  }
  else{
    if(b>c){
        if(a>c){
            printf("%d %d %d\n",b,a,c);
        }
        else{printf("%d %d %d\n",b,c,a);}
    }
  }




}
return 0;
}
