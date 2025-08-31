#include<stdio.h>
int main ()
{
    int num;
    printf(" Enter a number .....");
    scanf(" %d",&num);
    if(num>0){
        printf("positive number");
    }
    else if (num==0){
        printf("number is zero");
    }
    else{
        printf("negative number");
    }
    return 0;
}