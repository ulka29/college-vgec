//Write a program to evaluate the series sum=1-x+x^2/2!-x^3/3!+x^4/4!……-x^9/9!
#include<stdio.h>
#include<math.h>
void main(){
    int i,x,a,n;
    float fact=1,p,j;
float series=0;
printf("enter highest power value(max 9) :");
scanf("%d",&n);
printf("enter x :");
scanf("%d",&x);
    for(i=1;i<=n;i++)
    {
        
        fact=fact*i;
        p=pow(-1,i);
        a=pow(x,i);
        j=(a*p);
        series=series+j/fact;
    }
    series=series+1;
    printf("series sum is: %f",series);
}