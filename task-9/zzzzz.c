#include<stdio.h>
int main(){
    int myAge=18;
    scanf("%d",&myAge);
    if(myAge>=18){
        printf("you can vote");
    }
    else{
        printf("you cannot vote");
    }
    return 0;
}