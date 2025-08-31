#include<stdio.h>
int main ()
{
    int i=18;
    int *j=&i;
    printf("address of i %p\n",j);
    printf("Value of i %d",*j);
    printf("address of j %p ",&j);
    printf("address of i %p",j);
    return 0;
}