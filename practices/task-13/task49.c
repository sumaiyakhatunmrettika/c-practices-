#include<stdio.h>
int main(){
    int t,i,sum;
    scanf("%d",&t);
    for(i=1;i<t;i++){
        if(t%i==0)
        sum+=i;
    }
    if(sum==t)
    printf("perfect");
    else
    printf("not perfect");
    return 0;
}