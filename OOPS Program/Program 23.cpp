#include <iostream>
using namespace std;
// Function to perform addition
int add(int a, int b) 
{
    return a + b;
}

double add(double a, double b) 
{
    return a + b;
}

// Function to perform subtraction
int subtract(int a, int b) 
{
    return a - b;
}

double subtract(double a, double b) 
{
    return a - b;
}

// Function to perform multiplication
int multiply(int a, int b) 
{
    return a * b;
}

double multiply(double a, double b) 
{
    return a * b;
}

// Function to perform division
int divide(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        std::cout << "Error: Division by zero!" << std::endl;
        return 0;
    }
}

double divide(double a, double b) {
    if (b != 0.0) {
        return a / b;
    } else {
        std::cout << "Error: Division by zero!" << std::endl;
        return 0.0;
    }
}

int main() 
{
    // Integer operations
    int num1 = 10, num2 = 5;
    std::cout << "Integer Operations:\n";
    std::cout << "Addition: " << add(num1, num2) << std::endl;
    std::cout << "Subtraction: " << subtract(num1, num2) << std::endl;
    std::cout << "Multiplication: " << multiply(num1, num2) << std::endl;
    std::cout << "Division: " << divide(num1, num2) << std::endl;

    // Double operations
    double num3 = 10.5, num4 = 2.5;
    std::cout << "\nDouble Operations:\n";
    std::cout << "Addition: " << add(num3, num4) << std::endl;
    std::cout << "Subtraction: " << subtract(num3, num4) << std::endl;
    std::cout << "Multiplication: " << multiply(num3, num4) << std::endl;
    std::cout << "Division: " << divide(num3, num4) << std::endl;

    return 0;
}

