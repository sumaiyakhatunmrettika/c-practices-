#include<stdio.h>
int main(){
    int r,i,sum;
    scanf("%d",&r);
    for(i=1;i<=r;i++){
        sum+=i*i;i++;
    }
    printf("%d",sum);
    return 0;
}