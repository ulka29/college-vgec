#include<stdio.h>
void main(){
    int num,n;
    
    printf("enter any num");
    scanf("%d",&num);
    n=num;
    int fact=1;
    for (int i = n; 0 < n; n--)
    {
        fact=fact*n;
    }
    printf("factorial of %d is %d",num,fact);
    
}