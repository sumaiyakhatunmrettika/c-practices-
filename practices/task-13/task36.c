#include<stdio.h>
int main(){
    int s,i,sum;
    scanf("%d",&s);
    for(i=2;i<=s;i+=2){
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}