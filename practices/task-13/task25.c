#include<stdio.h>
int main(){
    float a,b,c,d,e,total,avg;
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    total=a+b+c+d+e;
    avg =total/5;
    printf("total = %.2f\n",total);
    printf("avg=%.2f\n,avg");
    if(avg>=40){
        printf("pass");
    }
    else{
        printf("fail");
    }
    return 0;
}

