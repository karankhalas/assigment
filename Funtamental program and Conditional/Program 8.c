//8.Find circumference of Triangle formula : triangle = a + b + c

#include <stdio.h>
int main() 
{
    float  x, y, z, P, A; // Declare variables for side lengths and perimeter

    // Prompt user for the side lengths and store in 'x', 'y', and 'z'
    printf("\nInput the first number: "); 
    scanf("%f", &x);
    printf("\nInput the second number: ");
    scanf("%f", &y);
    printf("\nInput the third number: ");
    scanf("%f", &z);

    if(x < (y+z) && y < (x+z) && z < (y+x)) // Check if the sides can form a triangle
     {  
        P = x+y+z; // Calculate perimeter
        printf("\nPerimeter  = %.1f\n", P); // Print perimeter	 
    }
    else
    {
        printf("Not possible to create a triangle..!"); // Print message if it's not possible to form a triangle
    }
    
    return 0;
}

