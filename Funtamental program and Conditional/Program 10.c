//10..Find circumference of square formula : C = 4 * a

#include <stdio.h>

void main() 
{

  float side, perimeter, area;

  /* Taking user input */
  printf("Enter the length of the side of the square:\n");
  scanf("%f", & side);

  /* Calculate Perimeter of the square */
  perimeter = 4 * side;
  printf("Perimeter of the Square : %0.4f\n", perimeter);

  /* Calculate Area of the square */
  area = side * side;
  printf("Area of the square : %0.4f\n", area);
}

