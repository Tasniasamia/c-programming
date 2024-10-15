#include<stdio.h>
int main()
{
    int i, j,count;

    for(i=2; i<=20; i++)
    {
        count=0;
        if(i==2){
          count=0;
        }
        else{
            for(j=2;j<i;j++){
                if(i%j == 0){
                    count++;
                }

            }

      }
      if(count == 0){
        printf("%d is prime\n",i);
      }
        }


      return 0;
}
