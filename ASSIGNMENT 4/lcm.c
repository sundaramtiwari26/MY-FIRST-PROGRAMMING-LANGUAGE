#include<stdio.h>
int main ()
{
    int num1,num2;
    printf("Enter two number one by one.....");
    scanf(" %d%d",&num1,&num2);
    int min=num1>num2? num1:num2;
    for(int i=min;i<=num1*num2;i++){
        if(i%num1==0 && i%num2==0){
            printf("The LCM of %d and %d is %d",num1,num2,i);
            break;
        }
    }
   

    return 0;
}