#include <iostream>

class Calculator 
{
private:
    double num1;
    double num2;

public:
    // Constructor to initialize the numbers
    Calculator(double a, double b) 
	{
        num1 = a;
        num2 = b;
    }

    // Function to perform addition
    double add() 
	{
        return num1 + num2;
    }

    // Function to perform subtraction
    double subtract() 
	{
        return num1 - num2;
    }

    // Function to perform multiplication
    double multiply() 
	{
        return num1 * num2;
    }

    // Function to perform division
    double divide() 
	{
        if (num2 != 0) 
		{
            return num1 / num2;
        } else 
		{
            std::cout << "Error: Division by zero!" << std::endl;
            return 0;
        }
    }
};

int main() 
{
    // Get input values
    double value1, value2;

    std::cout << "Enter two numbers: ";
    std::cin >> value1 >> value2;

    // Create Calculator object with the input values
    Calculator myCalculator(value1, value2);

    // Perform operations and display results
    std::cout << "Addition: " << myCalculator.add() << std::endl;
    std::cout << "Subtraction: " << myCalculator.subtract() << std::endl;
    std::cout << "Multiplication: " << myCalculator.multiply() << std::endl;
    std::cout << "Division: " << myCalculator.divide() << std::endl;

    return 0;
}

