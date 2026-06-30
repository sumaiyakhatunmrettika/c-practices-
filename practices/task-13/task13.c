#include<stdio.h>
#include<stdbool.h>
int main(){
    int m;
    bool result;
    scanf("%d",&result);
    result = (m>=1 && m<=100 && m % 2== 0);
    if(result){
        printf("true");
    }
    else{
        printf("false");
    }
    return 0;
}