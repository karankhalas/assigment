#include <iostream>

// Inline function to find the multiplication of two numbers
inline double multiply(double a, double b) 
{
    return a * b;
}

// Inline function to find the cubic value of a number
inline double cube(double x) 
{
    return x * x * x;
}

int main() 
{
    // Get input values
    double num1, num2;

    std::cout << "Enter two numbers for multiplication: ";
    std::cin >> num1 >> num2;

    // Calculate and display multiplication result using inline function
    std::cout << "Multiplication result: " << multiply(num1, num2) << std::endl;

    // Get input value for cubic calculation
    double value;

    std::cout << "Enter a number for cubic calculation: ";
    std::cin >> value;

    // Calculate and display cubic result using inline function
    std::cout << "Cubic value: " << cube(value) << std::endl;

    return 0;
}

