#include<stdio.h>
int main(){
/*int x=10,y;
int *p,*q;
p=&x;
q=&y;
y=*p;
*p=15;
*q=20;
printf("%d\n",x);
printf("%d\n",y);
printf("%d\n",*p);
printf("%d\n",*q);*/

char c='A';
char *p,**q;
p=&c;
q=&p;
**q='B';
printf("%c\n",c);
printf("%c\n",*p);
printf("%c\n",**q);

}
