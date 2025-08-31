#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main ()
{   int random,guess;
    int no_of_guess=0;
    srand(time(NULL));
    printf("Welcome to the world of Guessing Number\n");
    random=rand() % 100+1;//generating between 0 to 100
    // rand generate a very large number but remainder will be always in between 0 to 99
    do{
        printf("Please enter your guess number from 1 to 100.......");
        scanf("%d",&guess);
        no_of_guess++;
        if(guess>random){
            printf("Guess smaller number\n");
        }
        else if(guess<random){
            printf("Guess larger number\n");
        }
        else{
            printf("Congratulations ! You have guessed the number in %d attempt",no_of_guess);
        }

    }
    while(guess!=random);
    printf("\nThanks for playing");
    printf("\nDeveloped by : Sundaram tiwari");
    return 0;
}