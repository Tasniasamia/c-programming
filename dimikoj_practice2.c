#include<stdio.h>
#include<string.h>
int main()
{
    int T,N,i,j;
    char arr[101];
    scanf("%d",&T);
    if(1<=T && T<=100)
    {
        for(i=1;i<=T;i++){


        scanf("%s",&arr);
        int string_length=strlen(arr);
        if(string_length<=100)
        {
            N=arr - '0';
            printf("number of n is %d\n",N);
            if(N%2 == 0)
            {
                printf("even\n");
            }
            else
            {
                printf("odd\n");

            }
        }

    }
    }

}
