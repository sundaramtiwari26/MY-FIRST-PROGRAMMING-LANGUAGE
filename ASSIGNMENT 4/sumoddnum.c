#include<stdio.h>
int main ()
{
    int num,sum=0;
    printf("Enter a number ......");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        if(i%2!=0){
            sum+=i;
        }
        else{
            continue;
        }
    }
    printf("The sum of odd numbers till %d is %d",num,sum);
    return 0;
}