#include<stdio.h>
int main ()
{
    int p,r,t;
    printf("Enter the principle value , rate and time respectively....");
    scanf(" %d%d%d",&p,&r,&t);
    float si=(p*r*t)/100;
    printf("The value of simple value is %.2f",si);
    return 0;
}