#include<stdio.h>
void main(){
    int i,j;
    char str[50],ch;
    printf("enter a string :");
    gets(str);
    
    printf("enter a char :");
    scanf("%c",&ch);
    for(i=0;str[i]!='\0';i++){
        if(str[i]==ch){
            for (j=i;str[j]!='\0';j++)
            {
                str[j]=str[j+1];
            }
          i--;  
        }
    }
printf("%s",str);
}