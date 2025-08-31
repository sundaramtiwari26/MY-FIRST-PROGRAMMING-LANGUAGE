#include<stdio.h>
int main ()
{
    int age=19;
    int *ptr=&age;
    *ptr=20;
    printf("I am %d years old",*ptr);
    return 0;
}