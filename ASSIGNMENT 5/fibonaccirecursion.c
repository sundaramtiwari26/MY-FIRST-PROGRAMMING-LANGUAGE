#include<stdio.h>
int fibonacci(int n);
int main ()
{
    int num;
    printf("Enter the range....");
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        printf("%d\t",fibonacci(i));
    }

    return 0;
}
int fibonacci(int n){
    if(n<=1){
        return n;
    }
    int current=fibonacci(n-1)+fibonacci(n-2);
    return current;
}