#include<stdio.h>
#include<string.h>
int fib(int n)
{
    if(n==1 || n==2)
    {
        return 1;
    }
    return fib(n-1)+fib(n-2);
}
int main()
{
    int n;
    char s[5];
    scanf("%d",&n);

    if(n==1)
    {
        strcpy(s,"st");
    }
    else if(n==2)
    {
        strcpy(s,"nd");
    }
    else if(n==3)
    {
        strcpy(s,"rd");
    }
    else if(n==4)
    {
        strcpy(s,"rth");
    }
    else
    {
        strcpy(s,"th");
    }
    printf("%d%s fibonacci number is %d\n",n,s,fib(n));
    return 0;
}
