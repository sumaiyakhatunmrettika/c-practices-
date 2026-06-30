#include<stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    if(year % 100 == 0)
    printf("century year");
    else{
        printf("not century year");
    }
    return 0;
}