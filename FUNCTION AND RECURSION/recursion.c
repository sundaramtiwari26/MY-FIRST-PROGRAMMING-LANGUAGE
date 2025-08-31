#include<stdio.h>
int fact(int a);

int main ()
{
    int num;
    printf("Enter a number....");
    scanf("%d",&num);
    int factorial=fact(num);
    printf("The factorial of %d is %d",num,factorial);
    //A function calls itself is termed as recursive function
    //base case 
    return 0;
}
int fact(int a){
    if(a==0){
        return 1;
    }
    return a*fact(a-1);
}