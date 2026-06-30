#include<stdio.h>
int main(){
    int r,i,t,even,odd;
    scanf("%d %d",&r,&t);
for(i=1;i<=r;i++){
    if(t%2==0)
    even++;
    else{
        odd++;
    }
    printf("even=%d\nodd=%d",even,odd);
}
    return 0;
}