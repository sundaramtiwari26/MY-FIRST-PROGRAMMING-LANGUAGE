#include<stdio.h>
int main ()
{
    float side;
    printf("Enter the side of square in mtr....");
    scanf(" %f",&side);
    printf("The area of square having side %f is %f",side,side*side);
    return 0;
}