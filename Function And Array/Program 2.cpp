#include <iostream>
using namespace std;

int main() 
{
    // Declare variables
    double num1, num2, result;
    char operation;

    // Display the menu
    cout << "Choose an operation:" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;

    // Get input from the user
    cout << "Enter your choice (1-4): ";
    cin >> operation;

    // Check the chosen operation and get input for numbers
    switch (operation) 
	{
        case '1': // Addition
            cout << "Enter two numbers to add:" << endl;
            cin >> num1 >> num2;
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case '2': // Subtraction
            cout << "Enter two numbers to subtract:" << endl;
            cin >> num1 >> num2;
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
            break;
        case '3': // Multiplication
            cout << "Enter two numbers to multiply:" << endl;
            cin >> num1 >> num2;
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
            break;
        case '4': // Division
            cout << "Enter two numbers to divide:" << endl;
            cin >> num1 >> num2;
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
            } else {
                cout << "Error! Division by zero is undefined." << endl;
            }
            break;
        default:
            cout << "Invalid choice! Please choose a number between 1 and 4." << endl;
    }

    return 0;
}

