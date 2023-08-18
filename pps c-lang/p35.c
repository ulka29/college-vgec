#include<stdio.h>
#include<math.h>
void main(){
    float sum1=0,sum2=0,sum3=1;
    float geo,harmony,ave;
    int num[50];
    int n,i;
    printf("how many number you want to enter");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter number %d: ",i+1);
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++){
        sum1=sum1+num[i];
        sum2=sum2+(1.0/num[i]);
        sum3=sum3*num[i];
    }
    ave=sum1/n;
    harmony=n/sum2;
    geo=pow(sum3,(1.0/n));
    printf("geometric mean is %f",geo);
    printf("harmonic mean is %f",harmony);
    printf("average is %f",ave);
}