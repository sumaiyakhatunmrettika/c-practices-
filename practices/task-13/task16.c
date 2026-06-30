#include<stdio.h>
#include<stdbool.h>
int main(){
    int r;
    bool isFourDigit;
    scanf("%d",&r);
    isFourDigit=(r>=1000 && r<=999);
    if(isFourDigit){
        printf("true");
    }
    else{
    printf("false");
    }
    return 0;
}