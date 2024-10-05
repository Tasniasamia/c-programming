#include<stdio.h>
int main(){
int strawbery , druggon , s_price, d_price;
printf("Enter the number of strawbery \t");
scanf("%d",&strawbery);
printf("The number of strawbery is %d \n",strawbery);
printf("Enter the number of druggon \t");
scanf("%d",&druggon);
printf("The number of draggon is %d \n",druggon);
printf("Enter the price of strawbery \t");
scanf("%d",&s_price);
printf("The price of strawbery is %d \n",s_price);
printf("Enter the price of druggon \t");
scanf("%d",&d_price);
printf("The price of druggon is %d \n",d_price);
printf("Total cost of strawbery %d \n",(strawbery*s_price));
printf("Total cost of druggon %d \n",(druggon*d_price));
return 0;
}
