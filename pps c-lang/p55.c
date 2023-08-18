#include<stdio.h>
int main(){
    int x,y,*num1,*num2,temp;
    printf("enter first num");
    scanf("%d",&x);
    printf("enter second num");
    scanf("%d",&y);
    num1=&x;
    num2=&y;
    printf("\nnum1= %d   num2=%d\n",*num1,*num2);
    temp=*num1;
    *num1=*num2;
    *num2=temp;
    printf("num1= %d   num2=%d\n",*num1,*num2);
    return 0;
}