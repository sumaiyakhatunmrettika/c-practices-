#include<stdio.h>
#include<stdbool.h>
int main(){
 int s;
 bool nonZero;
 scanf("%d",&s);
 nonZero =(s !=0);
 if(nonZero){
    printf("true");
 }   
 else{
printf("false");
 }
    return 0;
}
