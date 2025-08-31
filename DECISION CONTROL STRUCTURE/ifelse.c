#include<stdio.h>
int main()
{
    char c;
    printf("Enter Y for indian else N...");
    scanf(" %c",&c);
    if(c=='Y'||c=='y'){
        int age;
        printf("Enter your age....");
        scanf("%d",&age);
        if(age>=18){
            printf("You are eligible for DL");
        }
        else{
            printf("You are not eligible for DL");
        }
    }
    else{
        printf("You are not eligible for DL");
    }
    return 0;
}