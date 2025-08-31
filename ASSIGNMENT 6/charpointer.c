#include<stdio.h>
int main ()
{
    char *ptr;
    printf("Enter a character....");
    scanf("%c",&(*ptr));
    printf("The character you entered is %c",*ptr);

    return 0;
}