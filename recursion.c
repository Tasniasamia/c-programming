#include<stdio.h>
//Recursion problem 1
/*void recurse(){
char*s="I live in Bangladesh";
printf("%s\n",s);
recurse();
}
int main(){
recurse();
return 0;

}*/


//Recursion problem 2
void recurse(int count){
if(count == 5){
    return;
}
printf("count=%d\n",count);
recurse(count+1);
printf(" return scount=%d\n",count);
}
int main(){
recurse(1);
return 0;

}
//Rcecursion problem 3
/*void recurse(int count){
    if(count == 5){
        return ;
    }
    recurse(count+1);
    printf("The count number is %d\n",count);
    return;
}
int main(){
    recurse(1);
    return 0;
}*/



