#include<stdio.h> 
int main ()
{
    //sum of two numbers.
    int num1,num2;
    printf("Enter the value of first number....");
    scanf("%d",&num1);
    printf("Now enter the value of second number.....");
    scanf(" %d",&num2);
    int add=num1+num2;
    printf("The sum of two numbers you entered is %d",add);
    return 0;
}