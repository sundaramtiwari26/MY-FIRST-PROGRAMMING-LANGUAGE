#include <stdio.h>
#include <time.h>
void fill_time(char*,int);
int main()
{   
    char time[50],date[100];
    int format;
    printf("\nChoose the time format: ");
    printf("\n1. 24 Hour format");
    printf("\n2. 12 Hour format(default).....");
    scanf("%d",&format);
    fill_time(time,format);
    printf("current_time: %s",time);
    return 0;
}
void fill_time(char* buffer,int format){
    time_t rawtime;
    struct tm *current_time;
    time(&rawtime);
    


    current_time = localtime(&rawtime);
    if(format==1){
    strftime(buffer,50,"%H:%M:%S ",current_time);
    }
    else{
        strftime(buffer,50,"%I:%M:%S %p",current_time);

    }
}