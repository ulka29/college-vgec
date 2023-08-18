#include<stdio.h>
int main(){
    int var=0;
    int *ptr = &var;
    printf("the address of the variable :%p",&ptr);
    return 0;
}