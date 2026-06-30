#include<stdio.h>
#include<stdbool.h>
int main(){
    int num;
    scanf("%d",&num);
    bool positive =(num>0);
    if(positive)
    printf("positive");
    else{
        printf("not positive");
    }
    return 0;
}