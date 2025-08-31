#include<stdio.h>
int main ()
{
    int num;
    number://label for goto
    printf("Enter a number....");
    scanf("%d",&num);
    if(num!=10){
        goto number;
    }
    // we avoid using goto it becomes hard to study
    return 0;
}