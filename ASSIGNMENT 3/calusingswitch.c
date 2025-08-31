#include<stdio.h>
int main ()
{
    int x,y;
    printf("Welcome to sum,sub,mul and div calculator of two numbers\n");
    char c;
    printf("Enter two number one by one..... ");
    scanf("%d%d",&x,&y);
    printf("Enter arithmatic symbol for your operation...");
    scanf(" %c",&c);
    switch (c)
    {
    case '+':
        printf("Sum %d",x+y);
        break;
    case '-':
        printf("Sub %d",x-y);
        break;
    case '*':
        printf("Mul %d",x*y);
        break;
    case '/':
        printf("Div %d",x/y);
        break;
    
    default:
        printf("You have entered an invalid symbol");
        break;
    }

    return 0;
}