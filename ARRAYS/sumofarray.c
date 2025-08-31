#include<stdio.h>
int sum(int num[],int lim);
int main ()
{
    int marks[5];
    int lim=5;
    for(int i=0;i<lim;i++){
        printf("Enter number....");
        scanf(" %d",&marks[i]);
    }
    int add=sum(marks,lim);
    printf("The sum of all element is %d",add);
    //array decl is by default is a pointer declp
    return 0;
}
int sum(int num[],int lim){
    int sumofele=0;
    for(int i=0;i<lim;i++){
        sumofele+=num[i];
    }
    return sumofele;
}