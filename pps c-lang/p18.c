#include<stdio.h>
void main(){
    int num;
    int rem,n=0;
    printf("enter any number");
    scanf("%d",&num);
    while (num>0)
    {
        
        rem=num%10; 
        n=n*10+rem;
 
        num=num/10;
 // printf("reverse is %d",n);    
    }
 printf("reverse is %d",n);       
}