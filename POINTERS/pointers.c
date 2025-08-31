//pointers are variable that store memory address of another variable
#include<stdio.h>
int main ()
{
    int i=9;
    printf("The adress of i is %p\n",&i);//ampersand
    printf("Value of i is %d\n",i);
    printf("Value of i %d",*(&i));
    return 0;
    //* value at address operator

}
