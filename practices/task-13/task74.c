#include<stdio.h>
#include<stdbool.h>
int main(){
    int age;
    scanf("%d",&age);
    bool vote = (age >= 18);
    if(vote)
    printf("eligible");
    else{
        printf("not eligible");
    }
    return 0;
}