#include <iostream>
#include <string>
using namespace std;
class Employee 
{
private:
    std::string name;
    int employeeID;
    double salary;

public:
    // Constructor to initialize name, employee ID, and salary
    Employee(const std::string& empName, int empID, double empSalary) 
        : name(empName), employeeID(empID), salary(empSalary) {}

    // Function to calculate and set salary based on performance
    void setSalary(double performanceFactor) 
	{
        // Assuming performanceFactor is a multiplier (e.g., 1.1 for a 10% increase)
        salary *= performanceFactor;
    }

    // Function to display employee information
    void displayEmployeeInfo() 
	{
        std::cout << "Employee Name: " << name << std::endl;
        std::cout << "Employee ID: " << employeeID << std::endl;
        std::cout << "Employee Salary: $" << salary << std::endl;
    }
};

int main() 
{
    // Create an Employee object with initial values using the constructor
    Employee emp1("Khalas Karan", 12345, 50000.0);

    // Display initial employee information
    std::cout << "Initial Employee Information:\n";
    emp1.displayEmployeeInfo();

    // Set salary based on performance (e.g., 10% increase)
    emp1.setSalary(1.1);

    // Display updated employee information
    std::cout << "\nEmployee Information after Performance Increase:\n";
    emp1.displayEmployeeInfo();

    return 0;
}

