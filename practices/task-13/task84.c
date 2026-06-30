#include<stdio.h>
#include<stdbool.h>
int main(){
    int age;
    scanf("%d",&age);
    bool ans = (age >= 13 && age <=19);
    printf("%d",ans);
    return 0;
}