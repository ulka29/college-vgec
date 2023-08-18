#include<stdio.h>
void swap(int*,int*);
void main(){
    int a,b,result;
    printf("enter any num");
    scanf("%d",&a);
    printf("enter any num");
    scanf("%d",&b);
    printf("before swaping");
    printf("a=%d  b=%d",a,b);
    swap(&a,&b);
printf("after swaping");
    printf("a=%d  b=%d",a,b);
}
void swap(int* x,int* y){
    int i;
    i=*x;
    *x=*y;
    *y=i;
}