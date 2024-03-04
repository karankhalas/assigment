#include <iostream>

class BankAccount 
{
private:
    int accountNumber;
    double balance;

public:
    // Constructor to initialize the object
    BankAccount(int accNumber, double initialBalance) 
	{
        accountNumber = accNumber;
        balance = initialBalance;
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

    // Function to get the account number
    int getAccountNumber() 
	{
        return accountNumber;
    }

    // Function to get the current balance
    double getBalance() 
	{
        return balance;
    }
};

int main() 
{
    // Create a BankAccount object with account number 123456 and initial balance $1000.0
    BankAccount myAccount(123456, 1000.0);

    // Display initial account information
    std::cout << "Account Information:" << std::endl;
    std::cout << "Account Number: " << myAccount.getAccountNumber() << std::endl;
    std::cout << "Initial Balance: $" << myAccount.getBalance() << std::endl;

    // Perform deposit and withdrawal operations
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);

    // Display updated account information
    std::cout << "\nUpdated Account Information:" << std::endl;
    std::cout << "Account Number: " << myAccount.getAccountNumber() << std::endl;
    std::cout << "Current Balance: $" << myAccount.getBalance() << std::endl;

    return 0;
}

