#include<stdio.h>
void swap(int a,int b);
int main()
{
    int x,y;
    printf("Enter two numbers.....");
    scanf("%d%d",&x,&y);
    printf("Before swap first value =%d and second value =%d\n",x,y);
    swap(x,y);
    printf("\nOutside function block After swap first value =%d and second value =%d",x,y);
    return 0;
    //remember scope rule
}
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    printf("In function call After swap first value =%d and second value =%d",a,b);
}