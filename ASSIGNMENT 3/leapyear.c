#include<stdio.h>
int main ()
{
    int year;
    printf("Enter the year....");
    scanf(" %d",&year);
    if(year%4==0){
        printf("Entered year is a leap year");
    }
    else{
        printf("Entered year is a general year");
    }
    return 0;
}