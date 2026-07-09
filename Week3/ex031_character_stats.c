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
    printf("Name: %s\n", name);
    printf("Level: %d\n", Level);
    printf("HP: %d\n", maxHP);
    printf("ATK: %d\n", attackdamage);
    printf("DEF: %d\n", defense);
    printf("sdf=== Welcome to my world ===\n");

    return 0;
}