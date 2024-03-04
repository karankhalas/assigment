#include <iostream>
using namespace std;
// Base class
class Person 
{
protected:
    std::string name;
    int age;

public:
    // Default constructor
    Person() : name(""), age(0) {}

    // Parameterized constructor
    Person(const std::string& n, int a) : name(n), age(a) {}

    // Function to read data
    void readData() 
	{
        std::cout << "Enter name: ";
        std::cin >> name;
        std::cout << "Enter age: ";
        std::cin >> age;
    }

    // Function to write data
    void writeData() const 
	{
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

// Derived class (Student)
class Student : public Person 
{
protected:
    float percentage;

public:
    // Default constructor
    Student() : percentage(0.0) {}

    // Parameterized constructor
    Student(const std::string& n, int a, float p) : Person(n, a), percentage(p) {}

    // Function to read data
    void readData() 
	{
        Person::readData(); // Call base class function to read Person data
        std::cout << "Enter percentage: ";
        std::cin >> percentage;
    }

    // Function to write data
    void writeData() const 
	{
        Person::writeData(); // Call base class function to write Person data
        std::cout << "Percentage: " << percentage << "%" << std::endl;
    }
};

// Derived class (Teacher)
class Teacher : public Student 
{
private:
    float salary;

public:
    // Default constructor
    Teacher() : salary(0.0) {}

    // Parameterized constructor
    Teacher(const std::string& n, int a, float p, float s) : Student(n, a, p), salary(s) {}

    // Function to read data
    void readData() 
	{
        Student::readData(); // Call base class function to read Student data
        std::cout << "Enter salary: ";
        std::cin >> salary;
    }

    // Function to write data
    void writeData() const 
	{
        Student::writeData(); // Call base class function to write Student data
        std::cout << "Salary: $" << salary << std::endl;
    }
};

int main() 
{
    // Create a Teacher object
    Teacher myTeacher;

    // Read data for Teacher
    myTeacher.readData();

    // Display data for Teacher
    std::cout << "\nTeacher Information:\n";
    myTeacher.writeData();

    return 0;
}

