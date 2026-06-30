#include<stdio.h>
int main(){
    int temperature;
    scanf("%d",&temperature);
    if(temperature>30){
    printf("Hot");
    }
    else if(temperature>=15){
        printf("normal");
    }else
    printf("cold");
    return 0;
}