#include<stdio.h>
int main(){
int arr[10][10];
int i,j,x,y;
char c;
printf("The position of character is  \n");
scanf("%c",&c);
printf("x value is \n");
scanf("%d",&x);
printf("y value is \n");
scanf("%d",&y);
for(i=0;i<10;i++){
for(j=0;j<10;j++){



if(c == 'L'){
j=y-1;
i=x;
if(i==0 && j==4){
    printf("You cannot go here\n");
    i=x;
    j=y;
    break;
}
break;
}
else if(c == 'T'){
i=x-1;
j=y;
if(i==0 && j==4){
    printf("You cannot go here\n");
    i=x;
    j=y;
    break;
}
break;
}
else if (c == 'B'){
i=x+1;
j=y;
if(i==0 && j==4){
    printf("You cannot go here\n");
    i=x;
    j=y;
    break;
}
break;
}
else if (c == 'R'){
j=y+1;
i=x;
if(i==0 && j==4){
    printf("You cannot go here\n");
    i=x;
    j=y;
    break;
}
break;
}
}
    if (j != 10) {
            break;
    }
}
printf("arr[%d , %d]\n",i,j);

}
