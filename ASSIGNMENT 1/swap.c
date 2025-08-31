#include<stdio.h>
int main ()
{
    int x,y,z;

    printf("Enter the value of x......");
    scanf(" %d",&x);
    printf("Now enter the value of y....");
    scanf(" %d",&y);
    printf("Before swap value of x = %d and y = %d",x,y);
    z=x;
    x=y;
    y=z;
    printf("\nAfter swap value of x = %d and y = %d",x,y);

    return 0;
}