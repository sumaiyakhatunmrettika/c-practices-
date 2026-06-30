#include<stdio.h>
#include<stdbool.h>
int main(){
     int num;
     scanf("%d",&num);
     bool even = (num % 2 == 0);
     if(even)
     printf("even");
     else{
        printf("odd");
     }
    return 0;
}