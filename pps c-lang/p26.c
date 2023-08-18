//Write a C program to find 1+1/2+1/3+1/4+….+1/n.
#include<stdio.h>

void main(){
    int n;
    float total=0;
    
    printf("enter any num");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        total=total+(1.0/i);
        
        
    }
    printf("%f",total);
}