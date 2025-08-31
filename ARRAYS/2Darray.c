#include<stdio.h>
int main ()
{
    int student[5][6];
    
    
    for(int i=0;i<5;i++){
        int stu=1;
        printf("student \n");
        for(int j=0;j<6;j++){
            printf("Enter marks....");
            scanf(" %d",&student[i][j]);
        }
    }
    return 0;
}