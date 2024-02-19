#include <stdio.h>  

void main()  
{  
    int cprice, sprice, plamt; 

    printf("Input Cost Price: ");  
    scanf("%d", &cprice);  
    printf("Input Selling Price: ");  
    scanf("%d", &sprice);  

    if(sprice > cprice)  // Check if selling price is greater than cost price.
    {  
        plamt = sprice - cprice;  // Calculate profit amount.
        printf("\nYou can book your profit amount : %d\n", plamt);  // Print profit message.
    }  
    else if(cprice > sprice)  // Check if cost price is greater than selling price.
    {  
        plamt = cprice - sprice;  // Calculate loss amount.
        printf("\nYou incurred a loss of amount : %d\n", plamt);  // Print loss message.
    }  
    else  // If neither profit nor loss.
    {  
        printf("\nYou are in a no profit, no loss condition.\n");  // Print message for no profit, no loss.
    }  
}  

