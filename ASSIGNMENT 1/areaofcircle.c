#include<stdio.h>
#define PI 3.14
int main ()
{
    float radius;
    printf("Enter the value of radius.....");
    scanf(" %f",&radius);
    float area=radius*radius*PI;
    printf("The area of circle having radius %.2f is %.2f",radius,area);
    printf("\nThe circumference of the circle is %.2f",2*PI*radius);
    return 0;
}