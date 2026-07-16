#include <stdio.h>

int main()
{
    int time;
    printf("Enter the time in seconds: ");
    scanf("%d", &time);

    int hours = time / 3600;
    int minutes = (time % 3600) / 60;
    int seconds = time % 60;

    printf("Time: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}