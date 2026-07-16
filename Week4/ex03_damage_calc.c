#include <stdio.h>
#include <math.h>

int main()
{
    int player_attack;
    int enemy_defense;
    int hit_number;

    printf("Enter player attack: ");
    scanf("%d", &player_attack);
    printf("Enter enemy defense: ");
    scanf("%d", &enemy_defense);
    printf("Enter hit number: ");
    scanf("%d", &hit_number);

    int base_damage = (player_attack - enemy_defense);
    if (hit_number % 5 == 0)
    {
        base_damage = (int)ceil((float)base_damage * 1.5f);
        printf("Damage: %d (Critical Hit)\n", base_damage);
    }
    else
    {
        printf("Damage: %d (Normal Hit)\n", base_damage);
    }

    return 0;
}