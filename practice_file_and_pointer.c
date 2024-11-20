#include<stdio.h>
int main(){
//Pointer problem example one
/*int x=10;
int*p;
printf("value of x: %d\n",x);
p=&x;;
*p=20;
printf("value of x: %d\n",x);
x=15;
printf("value of x: %d\n",x);
printf("value stored at location %p is  %d \n",x,*p);
printf("Address of x: %p\n",&x);
printf("value of p: %p\n",p);*/

//Pointer problem example two
/*int x=10;
int y;
int *p;
printf("value of x:%d\n",x);//10
p=&x;
y=*p;
*p=15;
printf("value of x:%d\n",x); //15
printf("value of y:%d\n",y);//10
printf("value of *p:%d\n",*p);//15
printf("address of x:%p\n",&x);// x er address jekhane ace
printf("address of y:%p\n",&y);//y er address jekhane ace shei jaigar address
printf("address of x:%p\n",p);//address of p*/
//pointer problem three
/*int x=10,y;
int *p,*q;
p=&x;
q=&y;
*p=15;
*q=20;
printf("x= %d\n",x);
printf("y= %d\n",y);
printf("p= %d\n",*p);
printf("q= %d\n",*q);*/

//pointer problem 4
/*int x=100;
int *p=NULL;
printf("x=%d\n",x);
printf("x address is %d\n",*p);
p=&x;
printf("x address is %d\n",*p);*/


//pointer problem 5
/*int *p=NULL;
*p=20;
printf("x address is %d\n",*p);

return 0;*/

//Pointer last problem
char c='A';
char *p, **q;
p=&c;
q=&p;
**q='B';
printf("value of c:%c\n",c);
printf("value of *p:%c\n",*p);
printf("value of **q:%c\n",**q);

}
