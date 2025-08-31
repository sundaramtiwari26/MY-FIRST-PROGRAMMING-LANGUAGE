#include<stdio.h>
int main ()
{
    int dig;
   
    printf("Enter a number.....");
    scanf("%d",&dig);
    int num=dig;
    int rev=0;
    for(int i=1;dig>0;i++){
        int rem=dig%10;
        rev=rev*10+rem;
        dig=dig/10;
    }
    if(num==rev){
        printf("Palindrome number");
    }
    else{
        printf("Not palindrome");
    }
   
    return 0;
}