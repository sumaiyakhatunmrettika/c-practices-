#include<stdio.h>
int main(){
    int pass;
    scanf("%d",&pass);
    if(pass<1000){
        printf("week");
    }
    else if(pass>=1000){
        printf("medium");
    }  
    else{
        printf("strong");
    }
  return 0;
}