#include<stdio.h>
int main ()
{
    int num;
    int sum=0;
    do{
        printf("Enter a number....");
        scanf("%d",&num);
        sum+=num;
        if(num==0){
            printf("The sum of all numbers is %d",sum);
            return 0;

        }
    }
    while(1);
    return 0;
}