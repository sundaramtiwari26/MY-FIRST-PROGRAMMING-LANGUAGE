#include<stdio.h>
void printmarks(int marks[],int num);
int main ()
{
    int marks[5];
    int count=5;
    for(int i=0;i<count;i++){
        printf("Enter the marks.....");
        scanf(" %d",&marks[i]);
    }
    printmarks(marks,count);
    return 0;
}
void printmarks(int marks[],int num){
    for(int i=0;i<num;i++){
    printf("marks %d\n",marks[i]);
}
}