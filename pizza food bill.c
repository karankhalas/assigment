#include <stdio.h>

// Function to display food items available
void displayFoodItems() 
{
    printf("\nFood Items Available:\n");
    printf("1. Pizza - $10.00\n");
    printf("2. Burger - $5.00\n");
    printf("3. Pasta - $8.00\n");
    printf("4. Sandwich - $4.00\n");
}

int main() 
{
    int choice, quantity;
    double totalBill = 0.0;
    char wantMore;

    // Display food items initially
    displayFoodItems();

    do {
        // Get user choice and quantity
        printf("\nEnter your choice (1-4): ");
        scanf("%d", &choice);

        // Validate choice
        if (choice < 1 || choice > 4) {
            printf("Invalid choice. Please enter a valid choice.\n");
            continue;
        }

        printf("Enter quantity: ");
        scanf("%d", &quantity);

        // Calculate and update total bill based on user choice and quantity
        switch (choice) {
            case 1:
                totalBill += quantity * 10.00; // Pizza price
                break;
            case 2:
                totalBill += quantity * 5.00; // Burger price
                break;
            case 3:
                totalBill += quantity * 8.00; // Pasta price
                break;
            case 4:
                totalBill += quantity * 4.00; // Sandwich price
                break;
        }

        // Display current total bill
        printf("Current Total Bill: $%.2f\n", totalBill);

        // Ask if the user wants to select more items
        printf("Do you want to select more items? (y/n): ");
        scanf(" %c", &wantMore);

        // Display food items if the user wants to select more
        if (wantMore == 'y' || wantMore == 'Y') {
            displayFoodItems();
        }

    } while (wantMore == 'y' || wantMore == 'Y');

    // Display the final bill
    printf("\nFinal Bill: $%.2f\n", totalBill);

    return 0;
}

