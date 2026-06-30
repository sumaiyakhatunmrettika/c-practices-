#include<stdio.h>
int main(){
    float amount,bonus =0;
    scanf("%f",&amount,&bonus);
    if(amount>=500){
        printf("bonus=amount*0.50");
    }
    else if(amount>=200){
        printf("bonus=amount*0.20");
    }
    else if (amount>=100){
        printf("bonus=amount*0.10");
    }
    printf("bonus =%.2f",bonus);
    return 0;
}