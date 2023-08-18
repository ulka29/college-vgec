#include<stdio.h>
void main(){
    int num[10],even[10],odd[10];
    for (int i = 0; i < 10; i++)
    {
        printf("enter num : %d",i+1);
        scanf("%d",&num[i]);
    }
    int j=0,k=0;
    for (int i = 0; i < 10; i++)
    {
        if (num[i]%2==0)
        {
            even[j]=num[i];
            j++;
        }
        else
        {
            odd[k]=num[i];
            k++;
        }
        
    }
    printf("odd numbers are:");
  for ( int i = 0; i < j; i++)
  {
    printf("\n%d",odd[i]);
  }
  printf("even numbers are :");
   for ( int i = 0; i < k; i++)
  {
    
    printf("\n %d",even[i]);
  } 


    
}