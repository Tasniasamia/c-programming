#include<stdio.h>
int main()
{
    int T,N;
    scanf("%d",&T);
    if(T<=10)
    {
        for(int i=1; i<=T; i++)
        {
            scanf("%d",&N);

            if(1<=N && N<=100000)
            {
                printf("Case %d:",i);

                for(int j=1; j<=N; j++)
                {
                    if(N%j==0)
                    {
                        printf(" %d",j);
                    }


                }


                    printf("\n");





            }





        }

    }



    return 0;
}
