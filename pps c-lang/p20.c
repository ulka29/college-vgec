#include<stdio.h>
void main(){
    int n;

    printf("enter any number");
    scanf("%d",&n);
int lastNum=n%10;
    while(n>10)
    {
        n=n/10;
    }
   int firstNum=n%10;
   int total=firstNum+lastNum;
   printf("\n%d",firstNum);
   printf("\n%d",lastNum);
printf("\n%d",total);
}