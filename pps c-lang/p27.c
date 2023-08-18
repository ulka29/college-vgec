//Write a C program to find 1+1/2!+1/3!+1/4!+…..+1/n!.
#include<stdio.h>

void main(){
    int n,j,fact;
    float total=0;
    
    printf("enter any num");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
fact=1;
        for(int j=1;j<=i;j++){
                fact =fact*j;
        }
        total=total+(1.0/fact);
        
        
    }
    printf("%f",total);
}