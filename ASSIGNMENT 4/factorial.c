#include<stdio.h>
int main ()
{
    int num,fact=1;
    printf("Enter a number to find it factorial.....");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        fact*=i;
    }
    printf("The factorial of %d is %d",num,fact);
    return 0;
}