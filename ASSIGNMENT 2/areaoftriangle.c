#include<stdio.h>
int main ()
{
    int b,h;
    printf("Enter the base and hieght of the triangle respectively....");
    scanf(" %d%d",&b,&h);
    float area=(b*h)/2;
    printf("The area of the triangle is %.2f",area);
    return 0;
}