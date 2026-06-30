#include<stdio.h>
int main(){
    int s,i,count;
    scanf("%d",&s);
    for(i=1;i<=s;i++){
        if(s%i==0)
        count ++;
    }
    if(count==2)
    printf("prime");
    else{
        printf("not prime");
    }
    return 0;
}