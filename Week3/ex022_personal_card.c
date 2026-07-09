#include <stdio.h>
int main()
{
    printf("[%10d]\n", 42);
    printf("[%-10d]\n", 42);
    printf("[%05d]\n", 42);
    printf("[%8.2f]\n", 3.10);
    printf("[%-8.2f]\n", 3.10);

    char name[50];
    int age;
    float gpa;
    char wicha[50];

    printf("Enter your name: ");
    scanf("%49s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your GPA: ");
    scanf("%f", &gpa);
    printf("Enter your wicha: ");
    scanf("%49s", wicha);

    printf("\n=== Personal Info ===\n");
    printf("┌──────────────────────────┐\n");
    printf("│Name= %-19s │\n", name);
    printf("│Age= %-20d │\n", age);
    printf("│GPA= %-20.2f │\n", gpa);
    printf("│Wicha= %-18.5s │\n", wicha);
    printf("└──────────────────────────┘");
    return 0;
}