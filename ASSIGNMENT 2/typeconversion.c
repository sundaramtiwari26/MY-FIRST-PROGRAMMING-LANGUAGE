#include<stdio.h>
int main ()
{
    int age;
    printf("enter a integer value....");
    scanf(" %d",&age);
    float newage=age;
    printf(" %.3f \n %d",newage,age);
    return 0;
}