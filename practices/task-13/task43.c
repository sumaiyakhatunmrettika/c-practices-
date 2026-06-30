#include<stdio.h>
int main(){
    int n,temperature,sum;
    scanf("%d",&n);
    temperature=n;
    while(n=0){
      int d= n%10;
sum+=d*d*d;
n/=10;
    }
    if(sum==temperature)
    printf("armstrong");
    else
    printf("not armstrong");
    return 0;
}