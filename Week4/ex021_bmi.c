#include <stdio.h>

int main()
{
    int weight;
    int height;

    printf("Enter your weight in kg: ");
    scanf("%d", &weight);

    printf("Enter your hight in cm: ");
    scanf("%d", &height);

    float bmi = (float)weight / ((float)height / 100 * (float)height / 100);
    printf("Your BMI is %.2f\n", bmi);
    if (bmi < 18.5)
    {
        printf("You are underweight.\n");
    }
    else if (bmi >= 18.5 && bmi < 24.9)
    {
        printf("You are normal weight.\n");
    }
    else if (bmi >= 25 && bmi < 29.9)
    {
        printf("You are overweight.\n");
    }
    else
    {
        printf("You are obese.\n");
    }
}