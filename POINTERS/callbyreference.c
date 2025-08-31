#include<stdio.h>
void swap(int *a,int *b);
int main ()
{
    int a,b;
    printf("Enter two number.....");
    scanf("%d%d",&a,&b);
    printf("Before swap first value =%d second value =%d",a,b);
    swap(&a,&b);
    printf("\nAfter swap first value=%d second value = %d",a,b);
    //pointers always remain of same size irrespective of how long data structure is

}
void swap(int *a,int *b){
    int temp=*(a);
    *a=*b;
    *b=temp;
}