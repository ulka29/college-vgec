#include<stdio.h>
void main(){
    char c,str[70],*cptr,*sptr;
    int i,n=0;
    printf("enter string : ");
    gets(str);
    
    printf("enter the charecter you want to find: ");
    scanf("%c",&c);
    sptr = &str[0];
    cptr=&c;
    for ( i = 0; *sptr!='\0'; sptr++)
    {
        if (*sptr==*cptr)
        {
            printf("address of  %c: %p\n",*sptr,sptr);
            n=1;
            break;
        }
        
    }
    if (n==0)
    {
        printf("char not found");
    }
    
}