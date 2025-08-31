#include<stdio.h>
void minmax(int *a,int *b,int *max,int *min);
int main ()
{   int a,b,min,max;
    printf("Enter two numbers.....");
    scanf("%d%d",&a,&b);
    minmax(&a,&b,&max,&min);
    printf("The max value is %d and min value is %d",max,min);

    return 0;
}
void minmax(int *a,int *b,int *max,int *min){
    if (*a>*b){
        *max=*a;
        *min=*b;
    }
    else{
        *max=*b;
        *min=*a;
    }
}