#include<stdio.h>
int main()
{
    int a[] = {1,2,20,30,45,46,89,90,91,100};

    int array_length=sizeof(a)/sizeof(a[0]);
    int i,low,high,mid;
    low=0;
    high=100;
    while(low<high)
    {

      mid=((low+high)/2);
        if(a[mid]<=45)
        {
           low=mid+1;
           mid=low+high/2;
           high=100;
           //if(a[mid] == 45){
           // printf("The position is  %d",mid);
           //}

           printf("Yes 45 is greater than mid \n");
           break;
        }
            else
            {
             low=0;
            high=mid-1;
            mid=low+high/2;
           printf("Yes 45 is less than mid \n");
           break;


           //if(a[mid] == 45){
           // printf("The position is  %d",mid);
           //}


        }

    }
    return 0;
}
