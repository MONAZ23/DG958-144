#include <stdio.h>
int main()
{
    // loop1
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    // loop2
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= 5; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    // loop3
    int n = 5;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * (n - i) - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}
