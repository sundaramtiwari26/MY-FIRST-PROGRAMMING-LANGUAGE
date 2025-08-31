#include<stdio.h>
float large(float,float);
int main ()
{
    float a,b;
    printf("Enter two float values....");
    scanf("%f%f",&a,&b);
    float greater=large(a,b);+

    printf("The greater value is %.2f",greater);
    return 0;
}
float large(float x,float y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}