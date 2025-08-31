#include<stdio.h>
int main ()
{
    int sum=0,num;
    do{
        printf("Enter a number.....");
        scanf("%d",&num);
        if(num>0){
            sum+=num;
            printf("The sum is %d\n",sum);
        }
        else{
            continue;
        }

    }
    while(1);
    return 0;
}