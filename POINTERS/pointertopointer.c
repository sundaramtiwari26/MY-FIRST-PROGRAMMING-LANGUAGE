#include<stdio.h>
int main ()
{
    //pointer of pointer store address of another pointer
    int i=19;
    int *ptr=&i;
    int **ptr2=&ptr;
    printf("Value of i %d\n",*(*ptr2));
    printf("address of i %p",ptr);
    printf("address of i %p",*ptr2);
    return 0;
}