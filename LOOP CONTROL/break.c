#include<stdio.h>
int main ()
{
    int n=5;
    for(int i=1;i<=10;i++){
        printf("%d\n",n*i);
        if(i==5){
            break;
        }
    }
    return 0;
}