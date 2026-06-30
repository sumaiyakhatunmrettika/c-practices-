#include<stdio.h>
int main(){
    int salary;
    scanf("%d",&salary);
    if(salary>=50000)
    printf("bonus=10000");
    else if(salary>=30000)
    printf("bonus=5000");
    else{
        printf("bonus=2000");
    }
    return 0;
}