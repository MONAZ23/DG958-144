#include <stdio.h>
int main()
{
    printf("Enter a number: ");
    int num;
    scanf("%d", &num);

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            printf(":::::result:::::\n");
            printf("%d is not a prime number.\n", num);
            return 0;
        }
        else
        {
            printf(":::::result:::::\n");
            printf("%d is a prime number.\n", num);
            return 0;
        }
    }
}