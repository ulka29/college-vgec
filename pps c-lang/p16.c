#include<stdio.h>
void main(){
    int num;
    printf("enter any integer number");
    scanf("%d",&num);
    if(num%2==0){
        printf("last digit of number is even");
    }
    else{
        printf("last digit of number is odd");
    }

}