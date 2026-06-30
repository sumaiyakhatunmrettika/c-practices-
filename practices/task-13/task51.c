#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    if(t>0)
    printf("positive");
    else if(t<0)
    printf("negative");
    else{
        printf("zero");
    }
    return 0;
}
