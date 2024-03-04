#include <iostream>
using namespace std;
// Base class for Personal Information
class PersonalInfo 
{
protected:
    std::string name;
    int age;

public:
    // Default constructor
    PersonalInfo() : name(""), age(0) {}

    // Parameterized constructor
    PersonalInfo(const std::string& n, int a) : name(n), age(a) {}

    // Function to input data
    void inputPersonalInfo() 
	{
        std::cout << "Enter name: ";
        std::cin >> name;
        std::cout << "Enter age: ";
        std::cin >> age;
    }

    // Function to display data
    void displayPersonalInfo() const 
	{
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

// Derived class for Student Marks
class StudentMarks : public PersonalInfo 
{
protected:
    int mathMarks;
    int scienceMarks;
    int englishMarks;

public:
    // Default constructor
    StudentMarks() : mathMarks(0), scienceMarks(0), englishMarks(0) {}

    // Parameterized constructor
    StudentMarks(const std::string& n, int a, int math, int science, int english)
        : PersonalInfo(n, a), mathMarks(math), scienceMarks(science), englishMarks(english) {}

    // Function to input data
    void inputStudentMarks() 
	{
        PersonalInfo::inputPersonalInfo(); // Call base class function to input PersonalInfo
        std::cout << "Enter Math marks: ";
        std::cin >> mathMarks;
        std::cout << "Enter Science marks: ";
        std::cin >> scienceMarks;
        std::cout << "Enter English marks: ";
        std::cin >> englishMarks;
    }

    // Function to display data
    void displayStudentMarks() const {
        PersonalInfo::displayPersonalInfo(); // Call base class function to display PersonalInfo
        std::cout << "Math Marks: " << mathMarks << std::endl;
        std::cout << "Science Marks: " << scienceMarks << std::endl;
        std::cout << "English Marks: " << englishMarks << std::endl;
    }
};

// Derived class for Result Sheet
class ResultSheet : public StudentMarks {
private:
    int totalMarks;
    float percentage;

public:
    // Default constructor
    ResultSheet() : totalMarks(0), percentage(0.0) {}

    // Parameterized constructor
    ResultSheet(const std::string& n, int a, int math, int science, int english)
        : StudentMarks(n, a, math, science, english), totalMarks(0), percentage(0.0) {}

    // Function to calculate total and percentage
    void calculateResult() 
	{
        totalMarks = mathMarks + scienceMarks + englishMarks;
        percentage = static_cast<float>(totalMarks) / 3;
    }

    // Function to display data
    void displayResult() const 
	{
        StudentMarks::displayStudentMarks(); // Call base class function to display StudentMarks
        std::cout << "Total Marks: " << totalMarks << std::endl;
        std::cout << "Percentage: " << percentage << "%" << std::endl;
    }
};

int main() 
{
    // Create a ResultSheet object
    ResultSheet studentResult;

    // Input data for ResultSheet
    studentResult.inputStudentMarks();

    // Calculate result for ResultSheet
    studentResult.calculateResult();

    // Display data for ResultSheet
    std::cout << "\nStudent Result Sheet:\n";
    studentResult.displayResult();

    return 0;
}

