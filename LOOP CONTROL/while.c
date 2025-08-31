#include<stdio.h>
int main()
{
    int i=1;
    while(i<=10){
        printf("%d\n",i);
        i++;
    }
    i=10;
    printf("\n");
    while(i>0){
        printf("%d\n",i);
        i--;
    }
    return 0;
}