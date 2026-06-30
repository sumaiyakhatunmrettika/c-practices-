#include<stdio.h>
int main(){
     float marks,attendance;
     scanf("%f %f",&marks,&attendance);
     if(marks>=40 && attendance>=75){
        printf("pass");
     }
     else{
        printf("fail");
     }
    return 0;
}