#include<stdio.h>
#include<stdbool.h>
int main(){
    int num;
    scanf("%d",&num);
    bool divisible = (num % 5 == 0 && num % 7 == 0);
    if(divisible)
    printf("yes");
    else{
        printf("no");
    } 
    return 0;
}