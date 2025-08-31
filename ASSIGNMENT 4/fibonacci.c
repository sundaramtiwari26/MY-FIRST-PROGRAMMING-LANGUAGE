#include<stdio.h>
int main ()
{
    int n;
    printf("Welcome to fibonacci series\n");
    printf("Enter a number.....");
    scanf("%d",&n);
    printf("0 ");
    if(n>0){
        printf("%d",1);
    }
    int prev=0;
    int next=1;
    while(prev+next<=n){
        int temp=prev+next;
        printf(" %d",temp);
        prev=next;
        next=temp;
    }

    return 0;
}