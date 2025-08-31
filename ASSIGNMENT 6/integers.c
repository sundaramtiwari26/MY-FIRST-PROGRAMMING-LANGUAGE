#include<stdio.h>
int main ()
{
    int age=19;
    int *ptr=&age;
    printf("I am %d year old",*ptr);
    return 0;
}