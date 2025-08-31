#include<stdio.h>
int main ()
{
    int a,b;
    printf("Enter two numbers one by one.....");
    scanf("%d%d",&a,&b);
    a>b? printf("second value is less than first"):printf("First value is less than second");
    return 0;
}