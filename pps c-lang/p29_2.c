//pattern
#include<stdio.h>
void main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(int k=(6-i);k>=1;k--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}