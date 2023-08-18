#include<stdio.h>
void series(int);
void main(){
    int num;
    printf("enter any num");
    scanf("%d",&num);
series(num);
}
void series(int n){
    int i,sum=0;
    for(i=1;i<=n;i++){
        sum=sum+i;

    }
    printf("sum of n number is :%d",sum);
}