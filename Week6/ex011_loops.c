#include <stdio.h>

int main()
{
    int i;
    int sum = 0;

    for (i = 1; i <= 10; i++)
    {
        printf("for: %d\n", i);
        sum += i;
    }

    i = 1;
    while (i <= 10)
    {
        int sum;
        printf("while: %d\n", i);
        i++;
        sum += i;
    }

    i = 1;
    do
    {
        int sum;
        printf("do-while: %d\n", i);
        i++;
        sum += i;
    } while (i <= 10);

    printf("Sum: %d\n", sum);
    return 0;
}