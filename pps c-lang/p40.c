#include<stdio.h>
void main(){
    int i,j=0,k;
    char str[50],ch,str1[50];
    printf("enter a string :");
    gets(str);
    for(i=0;str[i]!='\0';i++){
str1[i]=str[i];
        j++;
    }
    k=j;
    for(i=0;i!=k;i++){
       str[i]=str1[j-1];
       j--;
    } 
printf("%s",str);
}