#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number....");
    scanf("%d",&num);
    if(num%2==0){
        if(num>=10){
            if(num<=100){
                printf("Nested if ex");
                return 0;
            }
        }
    }
    printf("try again");
    
    return 0;
}