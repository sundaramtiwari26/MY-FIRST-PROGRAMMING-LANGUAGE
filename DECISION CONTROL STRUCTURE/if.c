#include<stdio.h>
int main ()
{
    int age;
    printf("Welcome to ARTO");
    printf("\nPlease enter your age to check you are eligible for DL or not....");
    scanf("%d",&age);
    if(age>=18){
        printf("You are eligible for DL");
    }
    
    printf("Your age is %d",age);
    
    return 0;
}