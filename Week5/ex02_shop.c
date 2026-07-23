#include <stdio.h>

int main()
{
    int cash = 300;
    enum
    {
        HealthPotion = 1,
        ManaPotion = 2,
        IronSword = 3,
        LeatherArmor = 4,
        Exit = 5
    } ItemIndex;

    printf("=== ITEM SHOP ===\n");
    printf("Gold: %d\n", cash);
    printf("1. Health Potion - 100 Gold (+50 HP)\n");
    printf("2. Mana Potion - 150 Gold (+30 MP)\n");
    printf("3. Iron Sword - 500 Gold (+20 ATK)\n");
    printf("4. Leather Armor - 300 Gold (+15 DEF)\n");
    printf("5. Exit\n");

    printf("Enter the number of the item you want to buy: ");
    int Item;
    scanf("%d", &Item);

    switch (Item)
    {
    case HealthPotion:
        if (cash < 100)
        {
            printf("You don't have enough gold to buy a Health Potion.\n");
            break;
        }
        printf("You bought a Health Potion for 100 gold.\n");
        cash -= 100;
        printf("Health Potion: 100 Gold\n");
        printf("Remaining: %d\n", cash);
        printf("ATK Bonus: +50 HP\n");
        break;
    case ManaPotion:
        if (cash < 150)
        {
            printf("You don't have enough gold to buy a Health Potion.\n");
            break;
        }
        if (cash < 150)
        {
            printf("You don't have enough gold to buy a Mana Potion.\n");
            break;
        }
        printf("You bought a Mana Potion for 150 gold.\n");
        cash -= 150;
        printf("Mana Potion: 150 Gold\n");
        printf("Remaining: %d\n", cash);
        printf("MP Bonus: +30 MP\n");
        break;
    case IronSword:
        if (cash < 500)
        {
            printf("You don't have enough gold to buy a Health Potion.\n");
            break;
        }
        printf("You bought an Iron Sword for 500 gold.\n");
        cash -= 500;
        printf("Iron Sword: 500 Gold\n");
        printf("Remaining: %d\n", cash);
        printf("ATK Bonus: +20 ATK\n");
        break;
    case LeatherArmor:
        if (cash < 300)
        {
            printf("You don't have enough gold to buy a Health Potion.\n");
            break;
        }
        printf("You bought Leather Armor for 300 gold.\n");
        cash -= 300;
        printf("Leather Armor: 300 Gold\n");
        printf("Remaining: %d\n", cash);
        printf("DEF Bonus: +15 DEF\n");
        break;
    case Exit:
        printf("Exiting the shop.\n");
        printf("Gold: %d\n", cash);
        break;
    default:
        printf("Invalid item selection.\n");
    }

    return 0;
}