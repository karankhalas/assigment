
// C Program to Find Surface Area of a Cube
#include <stdio.h>
int main()
{
    int side;
    float area;
    
    // Asking for input
    printf("Enter the side of the cube: ");
    scanf("%d", &side);
    
    // Calculating surface area 
    area = 6 * side * side;
    
    // Output
    printf("Surface Area of Cube: %.2f", area);
    return 0;
}

