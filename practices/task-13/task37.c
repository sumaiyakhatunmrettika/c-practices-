#include<stdio.h>
int main(){
    int i,count;
    scanf("%d",&i);
    for(i=1;i<=100;i++){
        if(i%2 ==0)
        count++;
    }
printf("%d",count);
    return 0;
}