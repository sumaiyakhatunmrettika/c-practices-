#include<stdio.h>
#include<stdbool.h>
int main(){
    int a;
    scanf("%d",&a);
    bool ans = (a>=1 && a<=10);
    printf("%d",ans);
    return 0;
}