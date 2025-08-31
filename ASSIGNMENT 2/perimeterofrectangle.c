#include<stdio.h>
int main ()
{
    int a,b,c,d;
    printf(" Enter the value of all side of a rectangle .....");
    scanf(" %d %d %d %d",&a,&b,&c,&d);
    int perimeter =a+b+c+d;
    printf("The perimeter of the square is %d",perimeter);
    return 0;
}