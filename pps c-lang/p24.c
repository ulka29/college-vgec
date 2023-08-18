#include<stdio.h>

void main(){
    int num,i,j=0;
    printf("enter any number");
    scanf("%d",&num);
    for(i=2; i<num;i++)
    {
        if(num%i==0){
            printf("num is not prime");
            j=1;
            break;
        }
    }
    if(j==0)
    {
        printf("num is prime");
    }

}