#include<stdio.h>
int main(){
    float da,basic,hra,ma,pf,gross,nt;
    basic=50000;

    da=.1*basic;
    hra=(7.50/100)*basic;
    ma=300;
    pf=(12.50/100)*basic;
    gross=basic+da+hra+ma;
    nt=gross-pf;
    printf(" \n PAY SLIP");
    printf("\n----------------------------------------------------");
    printf("\nBASIC: %.2f",basic);
    printf("\nDA: %.2f",da);
    printf("\nhra: %.2f",hra);
    printf("\nma %.2f",ma);
    printf("\n----------------------------------------------------");
    printf("\ngross: %.2f",gross);
    printf(" \npf : %.2f",pf);
    printf(" \nnet: %.2f",nt);
    printf(" \n=====================================================");
}