#include<stdio.h>
int main ()
{
    int marks;
    printf("Enter your marks.....");
    scanf("%d",&marks);
    if(marks>80){
        printf("High");
    }
    else{
        marks<=80 && marks>=50?printf("Moderate"):printf("Low");
    }
    return 0;
}