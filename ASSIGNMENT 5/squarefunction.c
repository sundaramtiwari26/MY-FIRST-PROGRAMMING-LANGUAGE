#include<stdio.h>
int square(int);
int main ()
{
    int num;
    printf("Enter a number to find its square.....");
    scanf("%d",&num);
    printf("The square of the number you entered is %d",square(num));
    return 0;
}int square(int x){
    return x*x;
}