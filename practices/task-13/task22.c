#include<stdio.h>
int main(){
    float income,tax;
    scanf("%f",&income);
    if(income>=50000){
        tax =income*0.10;
    }
    else{
        tax = income*0.05;
    }
    printf("%.2f",tax);
    return 0;
}