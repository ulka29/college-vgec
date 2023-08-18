#include<stdio.h>
int fact(int);
void main(){
int num,factorial;
printf("enter any num");
scanf("%d",&num);
factorial=fact(num);
printf("factorial is %d",factorial);
}
int fact(int x){
    if(x==1){
        return 1;
    }
    return fact(x-1)*x;
}