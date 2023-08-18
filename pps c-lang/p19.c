#include<stdio.h>
void main(){
    int n;
    printf("enter any number");
    scanf("%d",&n);
    int t1=0,term1,fibbo,term2,t2=1;
    for (int i = 0; i <n; i++)
    {

        if (i==0)
        {
            printf("0,");
            continue;
        }
               else if (i==1)
        {
            printf("1,");
            continue;
        }
        term2=t2;  
        term1=t1;  
        fibbo=term1+term2;  
        printf("%d,",fibbo);
        t1=term2;  
        t2=fibbo;
    }
    
}