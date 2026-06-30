#include<stdio.h>
int main(){
    int a;
    scanf("%d %d",&a);
    if(a<100)
    printf("greater");
    else if(a<100)
    printf("smaller");
    else{
        printf("equal");
    }
    return 0;
}