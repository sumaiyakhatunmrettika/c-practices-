#include<stdio.h>
int main(){
    int age;
    scanf("%d",&age);
    if(age>=12){
        printf("child");
    }
   else if(age>=19){
        printf("teen");
    }
else if(age>=59){
    printf("adult");
}
else
printf("old");
    return 0;
}