#include <stdio.h>

int main()
{
    char name[50];
    int maxHP = 150;
    int attackdamage = 75;
    int defense = 40;
    int Level = 1;

    printf("=== Create Character ===\n");
    printf("Enter your character name: ");
    scanf("%49s", name);
    printf("Enter your character maxHP: ");
    scanf("%d", &maxHP);
    printf("Enter your character attackdamage: ");
    scanf("%d", &attackdamage);
    printf("Enter your character defense: ");
    scanf("%d", &defense);
    printf("Enter your character Level: ");
    scanf("%d", &Level);
    printf("\n=== Character Summary ===\n");
    printf("╔═══════════════════════════╗\n");
    printf("║Name: %-20s ║\n", name);
    printf("╠═══════════════════════════╣\n");
    printf("║Level: %-19d ║\n", Level);
    printf("║HP: %-22d ║\n", maxHP);
    printf("║ATK: %-21d ║\n", attackdamage);
    printf("║DEF: %-21d ║\n", defense);
    printf("╠═══════════════════════════╣\n");
    printf("║ HP Bar: [██████████] 100% ║\n");
    printf("║ Power Score: %-13d║\n", attackdamage * 2 + defense + maxHP / 10);
    printf("╚═══════════════════════════╝\n");
    return 0;
}