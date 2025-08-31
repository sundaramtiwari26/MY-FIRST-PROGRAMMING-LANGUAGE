#include <stdio.h>
#include <math.h>
double division(double, double);
double modulo(int, int);
void printmenu();
int main()
{
    int choice;
    double first, second, result;
    while (1)
    {
        printf("\n----------------------\n");
        printmenu();

        printf("\nEnter your choice:...");
        scanf("%d", &choice);
        if (choice == 7)
        {
            break;
        }
        if (choice < 1 || choice > 7)
        {
            fprintf(stderr, "Invalid menu choice");
            continue;
        }
        printf("\nPlease enter the first number...");
        scanf("%lf", &first);
        printf("\nPlease enter second number....");
        scanf("%lf", &second);
        switch (choice)
        {
        case 1:
            result = first + second;
            break;
        case 2:
            result = first - second;
            break;
        case 3:
            result = first * second;
            break;
        case 4:
            result = division(first, second);
            break;
        case 5:
            result = modulo(first, second);
            break;
        case 6:
            result = pow(first, second);
            break;

            if (!isnan(result))
            {
                printf("\nResult of the operation is %.2f", result);
            }
        }
        printf("The result is %.2f",result);

        return 0;
    }}
    double division(double x, double y){
    
        if(x == 0)
        {
            fprintf(stderr, "Invalid arguement for modulus operation");
            return NAN;
        }
        else
        {
            return x / y;
        }
    }
    double modulo(int a, int b)
    {
        if (b == 0)
        {
            fprintf(stderr, "Invalid arguement for modulus operation");
            return NAN;
        }
        else
        {
            return a % b;
        }
    }
    void printmenu()
    {
        printf("\nWelcome to simple calculator\n");
        printf("Choose one of the following option:");
        printf("\n1.Addition");
        printf("\n2.Subtraction");
        printf("\n3.Multiply");
        printf("\n4.Divide");
        printf("\n5.Modulus");
        printf("\n6.Power");
        printf("\n7.Exit");
    }