//pattern
#include<stdio.h>
void main(){
    int j;
    for(char i='A';i<='E';i++){
        for(j='E';j>=i;j--){
            printf("%c",i);
        }
        printf("\n");
    }
}