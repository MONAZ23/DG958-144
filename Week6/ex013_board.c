#include <stdio.h>
int main()
{
    int row = 6;
    int cols = 10;

    int count = 1;
    for (int i = 0; i < row - 1; i++)
    {
        printf("+---+---+---+---+---+---+---+---+---+---+\n");
        printf("|");
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", count);
            count++;
            printf("|");
        }
        printf("\n");
    }
    printf("+---+---+---+---+---+---+---+---+---+---+\n");
    return 0;
}