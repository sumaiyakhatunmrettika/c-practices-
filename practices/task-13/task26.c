#include<stdalign.h>
int main(){
    float balance,withdraw;
    scanf("%f %f",&balance,&withdraw);
    if(balance>=withdraw){
        printf("suceess\nbalance left =%.2f",balance-withdraw);
    }
    else{
        printf("insufficient balance");
    }
    return 0;
}