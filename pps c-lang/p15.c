#include<stdio.h>
int main(){
    int num;
    printf("enter any number");
    scanf("%d",&num);
    if(num%2==0){
        printf("last digit is ever");
    }
    else{
        printf("number is odd");
    }
}