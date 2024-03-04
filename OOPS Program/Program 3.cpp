#include <iostream>
using namespace std;
class BankAccount 
{
private:
    std::string accountHolderName;
    int accountNumber;
    double balance;

public:
    // Constructor to initialize the object
    BankAccount(std::string name, int number, double initialBalance) 
	{
        accountHolderName = name;
        accountNumber = number;
        balance = initialBalance;
    }

    // Function to display account information
    void displayAccountInfo() 
	{
        std::cout << "Account Holder: " << accountHolderName << std::endl;
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Balance: $" << balance << std::endl;
    }

    // Function to deposit money
    void deposit(double amount) 
	{
        if (amount > 0) 
		{
            balance += amount;
            std::cout << "Deposit successful. New balance: $" << balance << std::endl;
        } else 
		{
            std::cout << "Invalid amount for deposit." << std::endl;
        }
    }

    // Function to withdraw money
    void withdraw(double amount) 
	{
        if (amount > 0 && amount <= balance) 
		{
            balance -= amount;
            std::cout << "Withdrawal successful. New balance: $" << balance << std::endl;
        } else 
		{
            std::cout << "Invalid amount for withdrawal or insufficient funds." << std::endl;
        }
    }
};

int main() 
{
    // Create a bank account object
    BankAccount userAccount("Khalas Karan", 258963, 100000.0);

    // Display user account information
    userAccount.displayAccountInfo();

    // Example: Deposit and Withdraw
    userAccount.deposit(500.0);
    userAccount.withdraw(200.0);

    return 0;
}

