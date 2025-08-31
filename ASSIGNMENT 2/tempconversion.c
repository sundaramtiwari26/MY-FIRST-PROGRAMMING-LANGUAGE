#include<stdio.h>
int main ()
{
    float f;
    printf("Enter the temp in fahrenheit....");
    scanf("%f",&f);
    float c=(f-32)*5/9;
    printf("The temp in celsius is %.2f",c);
    return 0;
}