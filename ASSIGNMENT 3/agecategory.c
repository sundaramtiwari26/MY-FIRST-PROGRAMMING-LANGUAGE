#include<stdio.h>
int main ()
{
    int age;
    printf("Enter your age....");
    scanf("%d",&age);
    if(age>=60){
        printf("Senior");
    }
    else if(age>=20 && age<60){
        printf("Adult");
    }
    else if(age>=13 && age<20){
        printf("Teen");
    }
    else{
        printf("Child");
    }
    return 0;
}