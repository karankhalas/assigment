//.Accept 5 names from user at run time
#include <stdio.h>

int main() 
{
    // Declare variables
    char names[5][50];

    // Get input from the user
    printf("Enter 5 names:\n");

    for (int i = 0; i < 5; i++) 
	{
        printf("Name %d: ", i + 1);
        scanf("%s", names[i]);
    }

    // Display the entered names
    printf("\nEntered names are:\n");

    for (int i = 0; i < 5; i++) 
	{
        printf("%s\n", names[i]);
    }

    return 0;
}
