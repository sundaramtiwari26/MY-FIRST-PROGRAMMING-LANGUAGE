#include <stdio.h>
int main()
{
    int dig, sum = 0;
    printf("Enter ia number.....");
    scanf("%d", &dig);
    for (int i = 1; dig > 0; i++)
    {
        int rem = dig % 10;
        sum += rem;
        dig = dig / 10;
    }
    printf("The sum of digits of number you entered is %d", sum);
    return 0;
}