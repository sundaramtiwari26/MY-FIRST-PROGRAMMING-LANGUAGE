#include<stdio.h>
int main ()
{
    int num;
    printf("Enter the number......");
        scanf("%d",&num);
    for(int i=1;i<=num;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
        else{
            continue;
        }
    }
        
    
    return 0;
}