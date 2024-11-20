#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int T,i,Number;
    char N[100];
    scanf("%d",&T);
    if(1<=T && T<=100)
    {
        for(i=1; i<=T; i++)
        {

            scanf("%s",&N);
            if(strlen(N)<=100)
            {
                Number=strlen(N);


               if(N[Number-1]== '0' || N[Number-1] == '2' || N[Number-1]== '4' || N[Number-1]== '6' || N[Number-1]== '8')
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
    return 0;
}
