#include<stdio.h>
void main(){
     int i;
    char str[50];
    printf("enter a string :");
    gets(str);
    for(i=0;str[i]!=0;i++)
    {
    if(str[i]<=123 && str[i]>=97){
    str[i]=str[i]-32;
      }
    }
    printf("%s",str);
}