#include <iostream>

class NumberSwapper; // Forward declaration

class Number 
{
private:
    int value;

public:
    Number(int val) : value(val) {}

    // Friend function declaration
    friend void swapNumbers(Number& num1, Number& num2);
    
    // Function to display the number
    void display() const {
        std::cout << "Number: " << value << std::endl;
    }
};

// Friend function definition
void swapNumbers(Number& num1, Number& num2) {
    // Swap numbers without using a third variable
    num1.value = num1.value + num2.value;
    num2.value = num1.value - num2.value;
    num1.value = num1.value - num2.value;
}

int main() 
{
    // Create two Number objects
    Number num1(5);
    Number num2(10);

    // Display original numbers
    std::cout << "Original Numbers:\n";
    num1.display();
    num2.display();

    // Swap numbers using friend function
    swapNumbers(num1, num2);

    // Display swapped numbers
    std::cout << "\nNumbers after swapping:\n";
    num1.display();
    num2.display();

    return 0;
}

