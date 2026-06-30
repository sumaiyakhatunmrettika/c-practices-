#include<stdio.h>
#include<stdbool.h>
int main(){
    int a;
    scanf("%d",&a);
    bool negative =(a<0);
    printf("%d",negative);
    return 0;
}