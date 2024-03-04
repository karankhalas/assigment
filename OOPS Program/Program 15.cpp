#include <iostream>
using namespace std;
class Address 
{
public:
    std::string street;
    std::string city;
    std::string state;
    std::string zipCode;
};

class Student 
{
private:
    std::string name;
    std::string studentClass;
    int rollNumber;
    int marks;
    Address address; // Aggregation

public:
    // Constructor to initialize student details
    Student(const std::string& studentName, const std::string& sClass, int roll, int studentMarks,
            const std::string& street, const std::string& studentCity, const std::string& studentState,
            const std::string& studentZipCode)
        : name(studentName), studentClass(sClass), rollNumber(roll), marks(studentMarks) {
            // Initialize address details
            address.street = street;
            address.city = studentCity;
            address.state = studentState;
            address.zipCode = studentZipCode;
    }

    // Function to calculate grade based on marks
    char calculateGrade() const 
	{
        if (marks >= 90) 
		{
            return 'A';
        } else if (marks >= 80) 
		{
            return 'B';
        } else if (marks >= 70) 
		{
            return 'C';
        } else if (marks >= 60) 
		{
            return 'D';
        } else 
		{
            return 'F';
        }
    }

    // Function to display student information
    void displayStudentInfo() const 
	{
        std::cout << "Student Information:\n";
        std::cout << "Name: " << name << std::endl;
        std::cout << "Class: " << studentClass << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Marks: " << marks << std::endl;
        std::cout << "Grade: " << calculateGrade() << std::endl;

        // Display address details
        std::cout << "Address:\n";
        std::cout << "Street: " << address.street << std::endl;
        std::cout << "City: " << address.city << std::endl;
        std::cout << "State: " << address.state << std::endl;
        std::cout << "ZIP Code: " << address.zipCode << std::endl;
    }
};

int main() 
{
    // Create a Student object with initial values
    Student myStudent("Khalas Karan", "Class 10", 101, 85, "123 Main St", "Ahmedabad", "Gujrat", "12345");

    // Display student information
    myStudent.displayStudentInfo();

    return 0;
}

