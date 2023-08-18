#include<stdio.h>
struct time_struct
{
    int hour,min,sec;
}time;

void main(){
    printf("enter the hour :");
    scanf("%d",&time.hour);
    printf("enter the minutes :");
    scanf("%d",&time.min);
    printf("enter the second :");
    scanf("%d",&time.sec);
    if(time.hour<0 || time.hour>24 || time.min<0 || time.min>60 || time.sec<0 || time.sec>60){
        printf("invalid input");
    }
    else{
        printf("%d:%d:%d",time.hour,time.min,time.sec);
    }
}


