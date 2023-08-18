#include<stdio.h>
void main(){
    char c,r,str[70];
    int i,n=0;
    printf("enter string : ");
    gets(str);
    printf("enter the word you want to replace: from ");
    scanf("%c",&c);
    getchar();
     printf("to ");
    scanf("%c",&r);
    for ( i = 0; str[i]!=0; i++)
    {
        if (c==str[i])
        {
            str[i]=r;
            
        }
        
    }
    printf("%s",str);
}