#include<stdio.h>
float get_avg(int,int,int,int,int);
int main ()
{
    int a,b,c,d,e;
    printf("Enter five marks......");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    float average=get_avg(a,b,c,d,e);
    printf("The average of five marks is %.2f",average);
    return 0;
}
float get_avg(int a,int b,int c, int d, int e){
    int sum=a+b+c+d+e;
    float avg=sum/5;
    return avg;
}