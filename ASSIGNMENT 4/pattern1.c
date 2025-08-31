#include<stdio.h>
int main ()
{
    int row;
    printf("Enter the number of row you want in pattern....");
    scanf("%d",&row);
    for(int i=1;i<=row;i++){
        printf("\n");
        for(int j=1;j<=i;j++)
        printf("*");
    }
    return 0;
}