#include<stdio.h>
int main ()
{
    int per;
    printf("Enter your percentage to calculate the grade....");
    scanf(" %d",&per);
    if(per>=90 && per<100){
        printf("A+ grade");
    }
    else if(per>=80 && per<90){
        printf("A grade");
    }
    else if(per>=60){
        printf("B grade");
    }
    else{
        printf("C grade");
    }
    return 0;
}