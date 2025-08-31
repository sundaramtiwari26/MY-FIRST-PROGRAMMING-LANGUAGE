#include<stdio.h>
void countTo100();//this function does not return anything
int sum(int a,int b);//function prototyping
int main ()
{
    //functions also alter the flow of the program
    //function avoid repetetive task
    countTo100();
    int x,y;
    printf("Enter two numbers.....");
    scanf("%d%d",&x,&y);
    printf("the sum of number you entered is %d",sum(x,y));
    //call by value
    return 0;
}
void countTo100(){
    for(int i=0;i<=10;i++){
        printf("%d\n",i);
    }
}//prefer return value over global variable
int sum(int a,int b){//function defination
    int add=a+b;
    return add;
}