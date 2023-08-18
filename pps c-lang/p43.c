#include<stdio.h>
int prime(int);
void main(){
    int num,result;
    printf("enter any num");
    scanf("%d",&num);
    result=prime(num);
printf("%d",result);
}
int prime(int n){
    int i,sum=0;
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            return 1;
            break;
        }

    }
    return 0;
}