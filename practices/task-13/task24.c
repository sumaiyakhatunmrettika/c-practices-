#include<stdio.h>
int main(){
    float a,b;
    scanf("%f %f",&a,&b);
    if(b==0){
        printf("Error");
    }
    else{
        printf("%.2f",a/b);
    }
    return 0;
}