#include <stdio.h>

int main()
{
    int choice, qty;
    char more;
    float total = 0;

    do
    {
        // Display Menu
        printf("\n===== FOOD MENU =====\n");
        printf("1. Pizza       - 200 Rs\n");
        printf("2. Burger      - 100 Rs\n");
        printf("3. Sandwich    - 150 Rs\n");
        printf("4. Pasta       - 180 Rs\n");
        printf("5. Cold Drink  - 50 Rs\n");

        // Take user choice
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Take quantity
        printf("Enter quantity: ");
        scanf("%d", &qty);

        // Conditional statements for billing
        switch(choice)
        {
            case 1:
                total += 200 * qty;
                printf("Pizza added to cart!\n");
                break;

            case 2:
                total += 100 * qty;
                printf("Burger added to cart!\n");
                break;

            case 3:
                total += 150 * qty;
                printf("Sandwich added to cart!\n");
                break;

            case 4:
                total += 180 * qty;
                printf("Pasta added to cart!\n");
                break;

            case 5:
                total += 50 * qty;
                printf("Cold Drink added to cart!\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

        // Ask user if they want to order more
        printf("Do you want to order more? (y/n): ");
        scanf(" %c", &more);

    } while(more == 'y' || more == 'Y');

    // Final bill
    printf("\n===== FINAL BILL =====\n");
    printf("Total Amount = %.2f Rs\n", total);

    return 0;
}