#include<stdio.h>
void main(){
    int student[20][2];
    
    for(int i=0;i<19;i++){
        printf("enter %d student roll no.: ",i+1);
        scanf("%d",&student[i][1]);
        printf("enter %d student marks: ",i+1);
        scanf("%d",&student[i][2]);
    }
    for(int i=0;i<19;i++){
        printf("\nRoll no: %d    marks: %d",student[i][1],student[i][2]);
    }
}