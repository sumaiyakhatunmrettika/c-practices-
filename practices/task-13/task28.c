#include<stdio.h>
int main(){
    float salary,bonus,tax,final;
    scanf("%f",&salary);
    if(salary >=50000){
        bonus=salary*0.20;
        tax = salary*0.10;
    }else{
        bonus=salary*9.10;
        tax=salary*0.05;
    }
    final = salary+bonus-tax;
    printf("%.2f",final);
    return 0;
}