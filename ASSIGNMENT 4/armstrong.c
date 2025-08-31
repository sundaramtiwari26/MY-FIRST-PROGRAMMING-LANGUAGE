#include<stdio.h>
int main ()
{
    int num;
    printf("Welcome to armstrong checker\n");
    printf("Enter a number.....");
    scanf("%d",&num);
    int copy=num;
    int sum=0;
    while(copy>0){
        int digit=copy%10;
        sum+=digit*digit*digit;
        copy=copy/10;
    }
    if(sum==num){
        printf("The number %d is armstrong number",num);
    }
    else{
        printf("Not a armstrong number");
    }
    return 0;
}