#include<stdio.h>
int n;  //global variable
int fact();
void main(){
int factorial;
printf("enter any num");
scanf("%d",&n);
printf("factorial is %d",fact());
}
int fact(){
    static int factN=1;  //static variable
    if(n==1){
        return factN;
    }
    return n--*fact();
}