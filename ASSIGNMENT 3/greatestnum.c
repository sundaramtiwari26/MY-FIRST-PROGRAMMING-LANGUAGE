#include<stdio.h>
int main ()
{
    int num1,num2,num3;
    printf("Enter three numbers one by one.....");
    scanf(" %d %d %d",&num1,&num2,&num3);
    if(num1>num2){
        if(num1>num3){
            printf("First number you entered is a greatest number");
        }else{
            printf("Third number you entered is a greatest of all number");
        }
    }
    if(num2>num1){
        if(num2>num3){
            printf("Second number you entered is the greatest of all numbers");
        }else{
            printf("Third number you entered is a greatest of all number");
        }
    }
    return 0;
}