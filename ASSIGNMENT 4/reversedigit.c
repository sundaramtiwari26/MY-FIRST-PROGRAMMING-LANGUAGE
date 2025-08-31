#include<stdio.h>
int main ()
{
    int dig;
    printf("Enter a number.....");
    scanf("%d",&dig);
    int rev=0;
    for(int i=1;dig>0;i++){
        int rem=dig%10;
        rev=rev*10+rem;
        dig=dig/10;
    }
    printf("Reverse of the number you entered is %d",rev);
    return 0;
}