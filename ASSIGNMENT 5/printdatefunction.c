#include<stdio.h>
#include<time.h>
void date();
int main ()
{
    date();
    return 0;
}
void date(){
    time_t now;
    time(&now);
    printf("Current date and time is: %s",ctime(&now));

}