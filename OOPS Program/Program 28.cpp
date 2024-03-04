#include <iostream>
using namespace std;
class MaxFinder; // Forward declaration

class Numbers {
private:
    int num1, num2;

public:
    Numbers(int a, int b) : num1(a), num2(b) {}

    // Friend function declaration
    friend void findMax(const Numbers& numbers);
};

// Friend function definition
void findMax(const Numbers& numbers) {
    if (numbers.num1 > numbers.num2) {
        std::cout << "Maximum Number: " << numbers.num1 << std::endl;
    } else {
        std::cout << "Maximum Number: " << numbers.num2 << std::endl;
    }
}

int main() 
{
    // Input two numbers
    int num1, num2;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    // Create an object of Numbers
    Numbers numbers(num1, num2);

    // Call the friend function to find the maximum number
    findMax(numbers);

    return 0;
}

