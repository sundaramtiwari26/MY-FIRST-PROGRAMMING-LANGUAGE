#include<stdio.h>
int reverse(int,int);
int main ()
{
    int num;
    printf("Enter a number....");
    scanf("%d",&num);
    int rev=reverse(num,0);
    if(num==rev){
        printf("Palindrome");
    }
    else{
        printf("Not palindrome");
    }
    return 0;
}
int reverse(int num,int rev){
    if(num==0){
        return rev;
    }
    int rem=num%10;
    int new_num=num/10;
    int new_rev = rev*10+rem;
    return reverse(new_num,new_rev);
}