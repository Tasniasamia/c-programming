#include<stdio.h>
int main(){
//printf("%d\n",10%-7);
/*int data=11;
int data2=data<=12?data:12;
switch (data2)
{
case 12:
printf("value is 12\n");
break;
case 11:
printf("value is 11\n");
break;
case 10:
printf("value is 10\n");
break;
default:
printf("Not matched");
break;
}*/
#include <stdio.h>

int main() {
 /*   int money = 5;
    int n = 1;

    while (n <= 10) {
        if (n == money) {
        n = n + 1;

            continue;
        }
        printf("%d \n", n);
        n = n + 1;
    }

    return 0;
}
*/
char grade[100];
int average=70;
if(average>79){
    grade="Honours";
}
else if (average>=60 && average<=79)
{
    grade="First division";
}
else if (average>=50 && average>=59){
    grade="Second division";
}
else if (average>39 && average<=49)
{

grade="Third divison";
}
else{
    grade="Fail";
}
printf("%s your result\n",grade);

}

