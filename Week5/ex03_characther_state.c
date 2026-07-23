#include <stdio.h>
int main()
{
    int max_health;
    int damage;
    int attack_count;
    _Bool is_poisened = 0;
    int temp;
    int health;

    printf("Enter Your Health:");
    scanf("%d", &max_health);
    printf("Enter Your Damage:");
    scanf("%d", &damage);
    printf("Enter Your AttackCount:");
    scanf("%d", &attack_count);
    printf("Enter Your Poisened:");
    scanf("%d", &temp);
    is_poisened = temp;

    health = max_health - damage;
    printf("Health:%d\n", health);

    if (health <= 0)
    {
        printf("Your Die!\n");
    }
    else if (((float)health / max_health) < 0.25f)
    {
        printf("Your CRITICAL!\n");
        if (is_poisened == 1)
        {
            printf("Your POISENED!\n");
        }
    }
    else if (is_poisened == 1)
    {
        printf("Your POISENED!\n");
        if (((float)health / max_health) < 0.25f)
        {
            printf("Your CRITICAL!\n");
        }
    }

    if (attack_count % 5 == 0 && attack_count != 0)
    {
        printf("Your can Ultimate!");
    }
    else
    {
        printf("Normal!");
    }

    return 0;
}