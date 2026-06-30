#include<stdio.h>
int main(){
    int temparature;
    scanf("%d",&temparature);
    if(temparature>=35)
    printf("hot");
    else if(temparature>=20)
    printf("warm");
    else{
        printf("cold");
    }
    return 0;
}