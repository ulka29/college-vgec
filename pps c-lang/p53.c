#include<stdio.h>
struct stdinfo
{
    char name[100];
    char branch[100];
    int marks;
};
void main(){
    struct stdinfo std[5];
    int i;
    for(i=0;i<5;i++){
        printf("\nEnter the information of the student %d\n",i+1);
        printf("name :");
        scanf("%s",&std[i].name);
        printf("branch :");
        scanf("%s",&std[i].branch);
        printf("marks :");
    scanf("%d",&std[i].marks);
    }

    for(i=0;i<5;i++){
        printf("\n\nfor student %d\n",i+1);
        printf("name :%s\n",std[i].name);
        
        printf("branch :%s\n",std[i].branch);
        printf("marks :%d\n",std[i].marks);
    }
    }