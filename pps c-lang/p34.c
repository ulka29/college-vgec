#include<stdio.h>
void main(){
    int n,max;
    int num[n];
    printf("enter how many number you want to enter");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        printf("\nenter number %d: ",i+1);
        scanf("%d",&num[i]);
    }
max=num[0];
    for(int i=0;i<n;i++)
    {
        if(max<num[i]){
            max=num[i];
        }
    }
printf("max num is: %d",max);
}