#include<stdio.h>
int main(){
    float m;
    scanf("%f",&m);
    if(m>=40){
        printf("4.00");
    }
else if(m>=70){
    printf("3.50");
}
else if(m>=60){
    printf("3.00");
}
else if(m>=50){
    printf("2.50");
}
else{
    printf("0.00");
}
    return 0;
}