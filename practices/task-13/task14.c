#include<stdio.h>
#include<stdbool.h>
int main(){
int age;
bool isTeen;
scanf("%d",&age);
isTeen=(age>=13&&age<=19);
if(age<19){
    printf("true");
}
else{
    printf("false");
}
    return 0;
}