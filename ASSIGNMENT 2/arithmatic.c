#include<stdio.h>
int main ()
{
    int num1,num2;
    printf("First number must be greater than second\n");
    printf(" enter two numbers one by one.....");
    scanf(" %d %d",&num1,&num2);
    printf("sum=%d,sub=%d,mul=%d,mod=%d,div=%d",num1+num2,num1-num2,num1*num2,num1%num2,num1/num2);
    return 0;
}