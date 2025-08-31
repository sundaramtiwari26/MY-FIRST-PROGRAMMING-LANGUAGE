#include<stdio.h>
int sum(int ,int,int,int);
int main ()
{
    int x,y,z,v;
    printf("Enter four numbers to find it sum.....");
    scanf("%d%d%d%d",&x,&y,&z,&v);
    int add=sum(x,y,z,v);
    printf("The sum of four numbers you entered is %d",add);
    return 0;
}
int sum(int a,int b,int c,int d){
    return a+b+c+d;
}