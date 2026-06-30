#include<stdio.h>
#include<stdbool.h>
int main(){
    int year;
    bool isLeap;
    scanf("%d",&year);
    isLeap = (year % 400 == 0)||
    (year % 4 == 0 && year % 100! =0);
    if(isLeap){
        printf("Leap year");
    }
    else{
        printf("not Leap year");
    }
    return 0;
}