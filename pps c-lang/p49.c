#include<stdio.h>
typedef struct person
{
    char name[100];
    long mobilbeNo;
    char email[100];
    char colName[100];
} per;
void main(){
    per p1;
    printf("enter your name :");
    scanf("%s",&p1.name);
    printf("enter your mobile no. :");
    scanf("%d",&p1.mobilbeNo);
    printf("enter your email :");
    scanf("%s",&p1.email);
    printf("enter your college :");
    scanf("%s",&p1.colName);

    printf("name :%s\n",p1.name);
    printf("mobile no. :%d\n",p1.mobilbeNo);
    printf("email :%s\n",p1.email);
    printf("College name: %s\n",p1.colName);
}
