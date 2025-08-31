#include<stdio.h>
int main ()
{
    char firstname[20],lastname[20];
    int age;
    printf("Enter first name....");
    scanf(" %s",firstname);
    printf("Enter last name....");
    scanf(" %s",lastname);
    printf("Enter your age...");
    scanf(" %i",&age);
    printf("Your name is %s %s and you are %d years old",firstname,lastname,age);

    return 0;
}