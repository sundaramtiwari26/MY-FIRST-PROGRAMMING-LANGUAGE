#include<stdio.h>
int main ()
{
    int p,r,t;
    printf("Enter the value of rate and principle value and time respectively.....");
    scanf(" %d%d%d",&r,&p,&t);
    float ci=p*(1+r/100)*t;
    printf("The value of compound interest is %.2f",ci);
    return 0;
}