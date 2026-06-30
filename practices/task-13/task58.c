#include<stdio.h>
int main(){
    float s;
    scanf("%f",&s);
    if(s>=30000)
    printf("%.2f",s*1.20);
    else
    printf("%.2f",s*1.10);
    return 0;
}