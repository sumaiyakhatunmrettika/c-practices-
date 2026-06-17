#include<stdio.h>
int main(){
    int marks;
    scanf("%d",&marks);
    printf("%d",marks);
    if(marks>=80){
        printf("Grade:A+");
    }
    else if(marks>=70){
        printf("Grade:r70");
    }
    else if(marks>=60){
        printf("Grade:A-");
    }
    else if(marks>=50){
        printf("Grade:b");
    }
    else 
    printf("Grade:F");
    return 0;
}