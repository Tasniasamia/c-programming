#include<stdio.h>
int main(){

   /*int n;
   double x;
   x=3.1416;
   n=(int) x;
   printf("%d \n",n);
   printf("%lf \n",x);*/

/*char a;
printf("input the character\t");
a=getchar();

printf("output the character ");
printf(" %c \n",a);*/

/*int num1,num2;
printf("please enter a number : ");
scanf("%d",&num1);
printf("please enter another number : ");
scanf("%d",&num2);
printf("%d + %d = %d",num1,num2,num1+num2);
printf("%d - %d = %d",num1,num2,num1-num2);
printf("%d * %d = %d",num1,num2,num1*num2);
printf("%d / %d = %d",num1,num2,num1/num2);*/


int num1 , num2 , value;

char sign;
printf("Please enter a number : ");
scanf("%d",&num1);
printf("please enter another number :");
scanf("%d",&num2);
value=num1+num2;
sign='+';
printf("%d %c %d = %d\n",num1,sign,num2,value);
value=num1-num2;
sign='-';
printf("%d %c %d = %d\n",num1,sign,num2,value);
value=num1*num2;
sign='*';
printf("%d %c %d = %d\n",num1,sign,num2,value);
value=num1/num2;
sign='/';
printf("%d %c %d = %d\n",num1,sign,num2,value);

return 0;

}
