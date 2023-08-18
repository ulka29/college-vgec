#include<stdio.h>
struct cricket
{
    char playName[100];
    int teamName;
    float batAve;
}player[5];

void main(){
    int i,j;
    for ( i = 0; i < 5; i++)
    {
          printf("\nEnter the information of the player %d\n",i+1);
        printf("name :");
        scanf("%s",&player[i].playName);
        printf("team name :");
        printf("\n1. CSK \n 2. RCB \n 3. MI");
        scanf("%d",&player[i].teamName);
        printf("betting average :");
        scanf("%f",&player[i].batAve);
            }
            for(j=1; j<4;j++){
                if(j==1)
                printf("CSK:\n");
                 if(j==2)
                printf("RCB:\n");
                 if(j==3)
                printf("MI:\n");
            for ( i = 0; i < 5; i++)
    {
        if(j==player[i].teamName){
            printf("%s has average of %f \n",player[i].playName,player[i].batAve);
        }
            }
            }
    
}
