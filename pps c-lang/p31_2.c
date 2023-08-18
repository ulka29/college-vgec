//pattern
#include<stdio.h>
void main(){
    int j;
    for(char i='E';i>='A';i--){
        for(j='A';j<=i;j++){
            printf("%c",j);
        }
        printf("\n");
    }
}