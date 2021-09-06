/*
 * Author: Francis Rinehart
 * Purpose: Coffee maker system called Nomenado
 * Language:  C
 * Last update: 9/06/2021 at 10:00 AM Eastern time
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void drinkchoice(int select);
void welcome_display();
int menu();
int main() // prints the functions under main
{
    int x = 1;
    do
    {
    int select;
    welcome_display();
    getchar();
    select = menu();
    drinkchoice(select);


    float milkCost = 0.25;
    float sugarCost = 0.10;

    char milk = 'y';
    char milk2 = 'n';
    char sugar = 'y';
    char sugar2 = 'n';


    if (select > 0 && select < 6)
    {
        printf("\ndo you want milk in your coffee? y or n: "); // user selects y for yes or n for no
        scanf("%s", &milk);

        if (milk == 'y')
        {
            printf("\nYou have added milk to your coffee\n");
            printf("$%.2f will be added to the cost of your drink\n", milkCost);
            printf("Do you want to add sugar to your coffee? y or n: ");
            scanf("%s", &sugar);
        }

        else if (milk2 == 'n')
        {
            printf("\nYou have decline milk in your coffee\n");
            printf("Do you want to add sugar to your coffee? y or n: ");
            scanf("%s", &sugar);
        }

        if (sugar == 'y')
        {
            printf("\nYou have added sugar to your coffee\n");
            printf("$%.2f will be added to the cost of your drink\n", sugarCost);
            printf("Thank you for your purchase and have a good day\n\n\n");
        }
        else if (sugar2 == 'n')
        {
            printf("\nYou have decline sugar to your coffee\n");
            printf("Thank for your purchase\n\n\n");
        }

    }


    } while(x == 1); // Enables the program to continue to restart

    return 0;

}

void drinkchoice(int select)
{
    switch(select)
    {
        case 1: printf("You have selected Coffee\n\n");
        break;
        case 2: printf("Decaffeinated coffee\n\n");
        break;
        case 3: printf("Espresso\n\n");
        break;
        case 4: printf("Cappuccino\n\n");
        break;
        case 5: printf("Latte\n\n");
        break;
        case 6: printf("You have exited the menu. Have a good day.");
        break;
        default: printf("\n\nInvalid input\n\n");
        break;
    }
}

int menu() // prompts user to the main menu
{
    int select;
    printf("--------------------------------------\n");
    printf("Main Menu\n");
    printf("--------------------------------------\n");
    printf("[1] Coffee\t\t\t $1.50\n");
    printf("[2] Decaffeinated coffee\t $1.50\n");
    printf("[3] Espresso\n");
    printf("[4] Cappuccino\n");
    printf("[5] Latte\n");
    printf("[6] Exit menu\n");
    printf("--------------------------------------\n");
    printf("Milk $0.25 | Sugar $0.10\n");
    printf("--------------------------------------\n\n");
    printf("Please select the following choices from the main menu: ");
    scanf("%d", &select);
    return select;
}
void welcome_display() // users are welcome to the coffee shop
{
    printf("\t\tWelcome to Nomenado Coffee Shop\n");
    printf("\t\tPress any key to continue\n");
}

