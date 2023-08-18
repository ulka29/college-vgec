//Write a program to evaluate the series 1^2+2^2+3^2+……+n^2

#include<stdio.h>

void main(){
    int n,total=0;
    printf("enter any num");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        total=total+(i*i);
    }
    printf("%d",total);
}