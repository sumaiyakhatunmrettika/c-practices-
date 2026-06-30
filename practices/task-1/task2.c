#include<stdio.h>
int main(){
        int age;
        scanf("%d",&age);
        if(age<=12){
            printf("child"); 
        }
        else if(age<=19){
            printf("Teen");
        }
        else if(age<=59){
            printf("Audlt");
        }else
        printf("senior");
    return 0;
}