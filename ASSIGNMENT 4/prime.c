#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number.....");
    scanf("%d", &n);
    if (n == 0 || n == 1)
    {
        printf("Not prime");
        return 0;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                printf("Not prime");
                return 0;
            }
        }
    }
    printf("Prime number");
    return 0;
}