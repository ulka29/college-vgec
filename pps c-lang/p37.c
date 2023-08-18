#include<stdio.h>
void main(){
    char c,str[70];
    int i,n=0;
    printf("enter string : ");
    gets(str);
    printf("enter the charecter you want to find");
    scanf("%c",&c);
    for ( i = 0; str[i]!=0; i++)
    {
        if (c==str[i])
        {
            printf("index is %d",i);
            n=1;
            break;
        }
        
    }
    if (n==0)
    {
        printf("char not found");
    }
    
}