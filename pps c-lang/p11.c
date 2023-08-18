#include<stdio.h>
int main(){
    char ch;
    printf("enter any latter");
    scanf("%c",&ch);
    if(ch>='0' && ch<='9')
    {
        printf("character is number");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("character is small letter");
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("character is capital letter");
    }
    else{
        printf("this is special character");
    }
}