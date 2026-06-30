#include<stdio.h>
#include<stdbool.h>
int main(){
    int r;
    bool isEven;
    scanf("%d",&r);
    if(r % 2 == 0){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}