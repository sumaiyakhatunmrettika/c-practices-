#include<stdio.h>
int main(){
float A;
scanf("%f",&A);
if(A>=80)
printf("A+");
else if(A>=70)
printf("A");
else if(A>=60)
printf("B");
else
printf("F");
    return 0;
}