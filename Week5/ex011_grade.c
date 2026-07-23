#include <stdio.h>

int main()
{
    printf("Enter your grade: ");
    int grade;
    scanf("%d", &grade);

    if (grade >= 80)
    {
        printf("Your grade is A\n");
    }
    else if (grade >= 75)
    {
        printf("Your grade is B+\n");
    }
    else if (grade >= 70)
    {
        printf("Your grade is B\n");
    }
    else if (grade >= 65)
    {
        printf("Your grade is C+\n");
    }
    else if (grade >= 60)
    {
        printf("Your grade is C\n");
    }
    else if (grade >= 55)
    {
        printf("Your grade is D+\n");
    }
    else if (grade >= 50)
    {
        printf("Your grade is D\n");
    }
    else
    {
        printf("Your grade is F\n");
    }

    return 0;
}
