#include<stdio.h>
struct person
{
    char name[100];
    char date[10];
    long salary;
} per;
void main(){
    struct person per[5];
    int i;
    for(i=0;i<5;i++){
        printf("\nEnter the information of the person %d\n",i+1);
        printf("enter your name :");
        scanf("%s",&per[i].name);
        printf("date of joining(dd/mm/yyyy) :");
        scanf("%s",&per[i].date);
        printf("salary :");
    scanf("%d",&per[i].salary);
    }

    for(i=0;i<5;i++){
        printf("\n\nfor person %d\n",i+1);
        printf("name :%s\n",per[i].name);
        
        printf("date of joining :%s\n",per[i].date);
        printf("salary :%d\n",per[i].salary);
    }
    }