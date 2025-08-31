#include<stdio.h>
void incre(int a);
int main ()
{
    int x=5;
    printf("Before call by function %d\n",x);
    incre(x);
    printf("After call by value function %d",x);

    return 0;
}
void incre(int a){
    printf("During call by value function %d\n",++a);
}