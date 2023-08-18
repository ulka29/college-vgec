#include<stdio.h>
void upper(char str[50]);
void main(){
    char str[50];
    printf("enter a string :");
    gets(str);
    upper(str);
}
void upper(char str[50]){
    int i;
    for(i=0;str[i]!=0;i++)
    {
    if(str[i]<=123 && str[i]>=97){
    str[i]=str[i]-32;
      }
    }
    printf("%s",str);
    }