#include<stdio.h>
int main(){
    float bmi;
    scanf("%f",&bmi);
    if(bmi<18.5)
    printf("underweight");
    else if(bmi<25)
    printf("normal");
    else{
        printf("overweight");
    }
    return 0;
}