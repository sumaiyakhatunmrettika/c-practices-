#include<stdio.h>
#include<stdbool.h>
int main(){
     int username,password;
     scanf("%d %d",&username,&password);
     bool ans = (username > 0 && password > 0);
     printf("%d",ans);
    return 0;
}