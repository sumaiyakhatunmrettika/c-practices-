#include<stdio.h>
int main(){
    float cp,sp;
    scanf("%f %f",&cp,&sp);
    if(sp<cp){
        printf("profit");
    }
    else if(sp<cp)
    printf("loss");
    else{
        printf("no profit no loss");
    }
    return 0;
}