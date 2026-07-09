#include <stdio.h>

int main()
{
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
    printf("Name= %s\n", name);
    printf("Age= %d\n", age);
    printf("GPA= %.2f\n", gpa);
    printf("Wicha= %s\n", wicha);

    return 0;
}