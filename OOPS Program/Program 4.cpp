#include <iostream>
#include <string>

class BankAccount 
{
private:
    std::string depositorName;
    int accountNumber;
    std::string accountType;
    double balance;

public:
    // Constructor to initialize the object
    BankAccount() 
	{
        depositorName = "";
        accountNumber = 0;
        accountType = "";
        balance = 0.0;
    }

    // Function to assign values
    void assignValues(std::string name, int number, std::string type, double initialBalance) 
	{
        depositorName = name;
        accountNumber = number;
        accountType = type;
        balance = initialBalance;
    }

    // Function to deposit an amount
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

    // Function to withdraw an amount after checking balance
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

    // Function to display name and balance
    void displayInfo() 
	{
        std::cout << "Depositor Name: " << depositorName << std::endl;
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Account Type: " << accountType << std::endl;
        std::cout << "Balance: $" << balance << std::endl;
    }
};

int main() 
{
    // Create a bank account object
    BankAccount userAccount;

    // Assign values to the account
    userAccount.assignValues("John Doe", 123456, "Savings", 1000.0);

    // Display user account information
    userAccount.displayInfo();

    // Example: Deposit and Withdraw
    userAccount.deposit(500.0);
    userAccount.withdraw(200.0);

    return 0;
}

