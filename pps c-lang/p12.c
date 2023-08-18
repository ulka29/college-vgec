#include<stdio.h>
int main(){
    int marks;
    printf("enter your marks");
    scanf("%d",&marks);
    if(marks>=80 && marks<=100){
        printf("your grade is distinction");
    }
    else if(marks>=60 && marks<=79){
        printf("first class");
    }
    else if(marks>=40 && marks<=59){
        printf("second class");
    }
    else if(marks>=0 && marks<=40){
        printf("fail");
    }
    else{
        printf("enter valid number");
    }
}