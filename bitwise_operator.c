/*#include<stdio.h>
int main(){
char a,b;
int x,y;
scanf("%d",&a);
b=a;
printf("a is %d\n",a);
printf("b is %d\n",b);

}*/

//Number is power of 2 or not
/*#include<stdio.h>
int sum=0;
int recurse(int num){
if(num==0){
    return 1;
}
num=num/2;
recurse(num);
sum=sum+num;
printf("sum is %d\n",sum);
return sum;

}
int main(){
    int number;
    scanf("%d",&number);
    //printf("function values is %d\n",recurse(number));
   if(recurse(number)== (number-1)){

        printf("Yes It's power of 2\n");
    }
    else{
        printf("No It's not power of 2\n");

    }
}*/

// even odd by bitwise operator
/*#include<stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    if((number&1) == 0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }

}*/


//convert upper to lower and lower to uppercase using bitwise operator
/*#include<stdio.h>
char  convert_upper_lower(char a){
if((a>=65)&&(90>=a)){
return a|32;
}
else{
return a^32;
}
}
int main(){
char a;
char*student="tASNIAsHARIN";
for(int i=0;student[i]!='\0';i++){
    printf("%c",convert_upper_lower(student[i]));
}
printf("\n");
scanf("%c",&a);
printf("%c",convert_upper_lower(a));
}*/

/*
//how many binary digit in a number
#include<stdio.h>
int main(){
printf("start program\n");
int number;
int count=0;
scanf("%d",&number);
while(number!=0){
if((number&1) == 1){
count++;
}
number=number>>1;
}
printf("count is %d\n",count);
}*/

//Given number and find the numbers bit
/*#include<stdio.h>
int main(){
int number,c;
scanf("%d",&number);
c=1<<3;
if((number&c)==0){
printf("1");}else{printf("0");}
}*/
#include <stdio.h>
int main(){
int arr[40],i,j,count;
for(i=0;i<11;i++){
    scanf("%d",&arr[i]);
}
printf("\n");
printf("Array is ------\n");
for(i=0;i<11;i++){
    printf("%d ",arr[i]);
}
printf("\n");
for(i=0;i<11;i++){
    count=0;
    for(j=0;j<11;j++){
    if((arr[i]^arr[j])== 0){
    count++;
    }}

    if(count == 1){
        printf("number is %d\n",arr[i]);
    }

}

}
/*#include <stdio.h>
int main(){
int arr[40],i,j,count;
for(i=0;i<10;i++){
    scanf("%d",&arr[i]);
}
printf("\n");
printf("Array is ------\n");
for(i=0;i<10;i++){
    printf("%d ",arr[i]);
}
printf("\n");
for(i=0;i<11;i++){
    count=0;
    for(j=0;j<10;j++){
    if((arr[i]^arr[j])== 0){
    count++;
    }}

    if(count == 1){
        printf("number is %d\n",arr[i]);
    }

}

}*/







































































