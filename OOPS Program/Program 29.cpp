#include <iostream>

// Template function to swap two values
template <typename T>
void swapValues(T& value1, T& value2) 
{
    T temp = value1;
    value1 = value2;
    value2 = temp;
}

int main() 
{
    // Swap integers
    int num1 = 5, num2 = 10;
    std::cout << "Before swapping - num1: " << num1 << ", num2: " << num2 << std::endl;
    swapValues(num1, num2);
    std::cout << "After swapping - num1: " << num1 << ", num2: " << num2 << std::endl;

    // Swap floating-point numbers
    double num3 = 3.14, num4 = 6.28;
    std::cout << "\nBefore swapping - num3: " << num3 << ", num4: " << num4 << std::endl;
    swapValues(num3, num4);
    std::cout << "After swapping - num3: " << num3 << ", num4: " << num4 << std::endl;

    // Swap characters
    char char1 = 'A', char2 = 'B';
    std::cout << "\nBefore swapping - char1: " << char1 << ", char2: " << char2 << std::endl;
    swapValues(char1, char2);
    std::cout << "After swapping - char1: " << char1 << ", char2: " << char2 << std::endl;

    return 0;
}

